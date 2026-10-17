/* FFC port HAL (P3).
 *
 * Memory model: game code and its static data live in host memory (tools/port_gendata.py blobs); everything the
 * game reaches by absolute address (I/O registers, VRAM, palette, OAM, the arena/heap in main RAM, the
 * 0x027ff000/0x02fff000 shared areas, DTCM-relative buffers) is backed by host memory mapped at the DS address:
 *   host/win32: fixed mappings (the executable is linked high, see tools/port_configure.py);
 *   wasm: linear memory below GLOBAL_BASE (0x10000000) is free, so DS addresses are valid as they are.
 * I/O registers are plain memory. Registers with side effects are emulated at the points that matter:
 * VCOUNT/DISPSTAT/KEYINPUT are refreshed once per frame, IF is owned by the HAL (writes from the game are ignored),
 * interrupts are dispatched through the game's OS_IRQTable (data_02fe0020) in ffc_hal_raise_irq.
 */
#include "hal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#include <windows.h>
#elif !defined(__EMSCRIPTEN__)
#include <sys/mman.h>
#endif

typedef void (*ffc_irq_fn)(void);
extern ffc_irq_fn data_02fe0020[32]; /* OS_IRQTable (dtcm) */

static const struct {
    uint32_t base, size;
    uint8_t fill;
} regions[] = {
    {0x01ff8000u, 0x00008000u, 0x00}, /* ITCM */
    {0x02000000u, 0x01000000u, 0x00}, /* main RAM (16 MB TWL) incl. DTCM at 0x02fe0000 and the shared areas */
    {0x03000000u, 0x01000000u, 0x00}, /* shared/ARM7 WRAM */
    {0x04000000u, 0x00200000u, 0x00}, /* I/O */
    {0x05000000u, 0x00010000u, 0x00}, /* palette */
    {0x06000000u, 0x00900000u, 0x00}, /* VRAM */
    {0x07000000u, 0x00010000u, 0x00}, /* OAM */
    {0x08000000u, 0x02010000u, 0xff}, /* GBA slot: open bus, no cartridge */
};

static uint32_t hal_if;
static uint64_t frames;
static int hal_ready;

static void map_region(uint32_t base, uint32_t size)
{
    void *want = (void *)(uintptr_t)base, *got;
#if defined(__EMSCRIPTEN__)
    got = want; /* below GLOBAL_BASE */
#elif defined(_WIN32)
    got = VirtualAlloc(want, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
#else
    got = mmap(want, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (got == MAP_FAILED)
        got = NULL;
#endif
    if (got != want) {
        fprintf(stderr, "ffc: cannot map DS region 0x%08x+0x%x (got %p)\n", base, size, got);
        exit(1);
    }
}

const uint8_t *ffc_rom;
uint32_t ffc_rom_size;

static void load_rom(void)
{
    const char *path = getenv("FFC_ROM") ? getenv("FFC_ROM") : "rom/baserom_usa.nds";
    FILE *f = fopen(path, "rb");
    uint8_t *buf;
    long n;
    if (!f) {
        fprintf(stderr, "ffc: cannot open ROM %s (set FFC_ROM)\n", path);
        exit(1);
    }
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    buf = malloc((size_t)n);
    if (!buf || fread(buf, 1, (size_t)n, f) != (size_t)n) {
        fprintf(stderr, "ffc: cannot read ROM %s\n", path);
        exit(1);
    }
    fclose(f);
    ffc_rom = buf;
    ffc_rom_size = (uint32_t)n;
}

void ffc_hal_init(void)
{
    size_t i;
    if (hal_ready)
        return;
    for (i = 0; i < sizeof regions / sizeof regions[0]; i++) {
        map_region(regions[i].base, regions[i].size);
        memset((void *)(uintptr_t)regions[i].base, regions[i].fill, regions[i].size);
    }
    FFC_REG16(FFC_REG_KEYINPUT) = 0x03ff; /* active low: nothing pressed */
    FFC_REG16(FFC_REG_EXTKEYIN) = 0x007f;
    /* Shared area the ARM7/BIOS fill in on hardware (HW_* in 0x027ffc00 / 0x02fffc00). */
    FFC_REG16(0x027ffc10u) = 0x5835;     /* HW_BOOT_CHECK_INFO_BUF-ish marker, harmless */
    /* What the IPL leaves behind: ROM header copy (HW_ROM_HEADER_BUF, both the NTR and TWL-era mirror) and the
     * card ID (HW_BOOT_CHECK_INFO_BUF). */
    load_rom();
    memcpy((void *)(uintptr_t)0x027ffe00u, ffc_rom, 0x160);
    memcpy((void *)(uintptr_t)0x02fffe00u, ffc_rom, 0x160);
    FFC_REG32(0x027ffc00u) = FFC_REG32(0x02fffc00u) = 0x00001fc2u;
    /* OSBootInfo (HW_WM_BOOT_BUF): boot_type = OS_BOOTTYPE_ROM, else FS skips the ROM archive. */
    FFC_REG16(0x027ffc40u) = FFC_REG16(0x02fffc40u) = 1;
    hal_ready = 1;
}

uint64_t ffc_hal_frame(void)
{
    return frames;
}

extern uint32_t ffc_cpsr;
extern void ffc_cpsr_written(void);
extern uint16_t data_02141510; /* OSi_ThreadInfo.isNeedRescheduling */
extern void func_02086c78(void); /* OSi_RescheduleThread */
extern void func_02087058(void *queue); /* OS_WakeupThread */
extern unsigned char data_02fe0544[]; /* OSi_IrqThreadQueue (dtcm) */

void ffc_hal_raise_irq(uint32_t mask)
{
    uint32_t pending, bit, cpsr;
    hal_if |= mask;
    if (!(FFC_REG16(FFC_REG_IME) & 1) || (ffc_cpsr & 0x80))
        return;
    cpsr = ffc_cpsr;
    ffc_cpsr = (cpsr & ~0x1fu) | 0x92; /* IRQ mode, IRQs off: thread switches are deferred */
    while ((pending = hal_if & FFC_REG32(FFC_REG_IE)) != 0) {
        for (bit = 0; !(pending & (1u << bit)); bit++)
            ;
        hal_if &= ~(1u << bit);
        FFC_REG32(FFC_REG_IF) = 1u << bit; /* what OS_IrqHandler would have read */
        FFC_REG16(FFC_REG_IME) = 0;
        if (data_02fe0020[bit])
            data_02fe0020[bit]();
        FFC_REG16(FFC_REG_IME) = 1;
        FFC_REG32(FFC_REG_IF) = 0;
    }
    /* OS_IrqHandler_ThreadSwitch: threads in OS_WaitIrq become ready (rescheduling deferred: IRQ mode) */
    if (*(uint32_t *)data_02fe0544)
        func_02087058(data_02fe0544);
    ffc_cpsr = cpsr;
    ffc_cpsr_written(); /* PXI replies to requests sent from IRQ handlers (e.g. alarms) */
    if (data_02141510) {
        data_02141510 = 0;
        func_02086c78();
    }
}

/* Timers 0-3 (OS_Tick uses TIMER0, OS_Alarm TIMER1), advanced once per frame by the frame's bus cycles. TMxCNT_L
 * is plain memory holding the reload value the game wrote; the HAL writes the running counter there, so a value
 * that differs from what the HAL last wrote is a new reload. Overflows raise TIMERx IRQs (coarse: at frame end). */
#define FFC_FRAME_CYCLES 560190u /* 33.514 MHz / 59.826 Hz */
static struct {
    int on;
    uint32_t cnt, reload, acc;
    uint16_t shown;
} tm[4];

static void hal_timers(uint32_t cycles)
{
    static const uint32_t div[4] = {1, 64, 256, 1024};
    uint32_t i, prev_ovf = 0, irq = 0;
    for (i = 0; i < 4; i++) {
        uint32_t reg = 0x04000100u + 4 * i, ctl = FFC_REG16(reg + 2), l = FFC_REG16(reg), ticks, total, ovf = 0;
        if (!tm[i].on || l != tm[i].shown)
            tm[i].reload = l;
        if (!(ctl & 0x80)) {
            tm[i].on = 0;
            prev_ovf = 0;
            continue;
        }
        if (!tm[i].on) {
            tm[i].on = 1;
            tm[i].cnt = tm[i].reload;
            tm[i].acc = 0;
        }
        if (i > 0 && (ctl & 4)) {
            ticks = prev_ovf;
        } else {
            tm[i].acc += cycles;
            ticks = tm[i].acc / div[ctl & 3];
            tm[i].acc %= div[ctl & 3];
        }
        total = tm[i].cnt + ticks;
        if (total >= 0x10000u) {
            uint32_t period = 0x10000u - tm[i].reload;
            ovf = 1 + (total - 0x10000u) / period;
            total = tm[i].reload + (total - 0x10000u) % period;
        }
        tm[i].cnt = total;
        FFC_REG16(reg) = tm[i].shown = (uint16_t)total;
        if (ovf && (ctl & 0x40))
            irq |= 8u << i;
        prev_ovf = ovf;
    }
    if (irq)
        ffc_hal_raise_irq(irq);
}

void ffc_hal_vblank(void)
{
    static uint64_t dump_frame = ~0ull;
    if (frames == 0 && getenv("FFC_DUMP_FRAME"))
        dump_frame = strtoull(getenv("FFC_DUMP_FRAME"), NULL, 0);
    frames++;
    FFC_REG16(FFC_REG_VCOUNT) = 192;
    FFC_REG16(FFC_REG_DISPSTAT) |= 1;
    hal_timers(FFC_FRAME_CYCLES);
    /* P3: present the two screens and poll input here. */
    if (frames == dump_frame) {
        extern void ffc_dump_threads(void);
        ffc_dump_threads();
    }
    if (getenv("FFC_TRACE_FRAMES") && frames % 60 == 0)
        fprintf(stderr, "ffc: frame %llu\n", (unsigned long long)frames);
    if (FFC_REG16(FFC_REG_DISPSTAT) & 0x20) /* VCount match IRQ enable (the match line is treated as reached) */
        ffc_hal_raise_irq(FFC_IRQ_VCOUNT);
    if (FFC_REG16(FFC_REG_DISPSTAT) & 0x8) /* VBlank IRQ enable */
        ffc_hal_raise_irq(FFC_IRQ_VBLANK);
    else
        hal_if |= FFC_IRQ_VBLANK;
    FFC_REG16(FFC_REG_DISPSTAT) &= ~1;
    FFC_REG16(FFC_REG_VCOUNT) = 0;
}

/* DMA channel ch (0-3) after its SAD/DAD/CNT registers were written: immediate and GX-FIFO transfers run at once
 * (and clear the enable bit), repeating V/HBlank transfers are left armed and not run. */
void ffc_hal_dma_kick(uint32_t ch)
{
    uint32_t r = 0x040000b0u + ch * 12;
    uint32_t cnt = FFC_REG32(r + 8), src = FFC_REG32(r), dst = FFC_REG32(r + 4);
    uint32_t n = cnt & 0x1fffff, timing = (cnt >> 27) & 7, unit = (cnt & (1u << 26)) ? 4 : 2;
    int32_t ds, ss;
    if (!(cnt & 0x80000000u))
        return;
    if (cnt & (1u << 25)) {
        if (getenv("FFC_TRACE"))
            fprintf(stderr, "ffc: dma%u repeat timing %u not emulated\n", ch, timing);
        return;
    }
    if (n == 0)
        n = 0x200000;
    ds = ((cnt >> 21) & 3) == 2 ? 0 : ((cnt >> 21) & 3) == 1 ? -(int32_t)unit : (int32_t)unit;
    ss = ((cnt >> 23) & 3) == 2 ? 0 : ((cnt >> 23) & 3) == 1 ? -(int32_t)unit : (int32_t)unit;
    if (dst >= 0x01000000u) /* the SDK's dummy DMA to address 0 is skipped */
        for (; n; n--, src += ss, dst += ds) {
            if (unit == 4)
                FFC_REG32(dst) = FFC_REG32(src);
            else
                FFC_REG16(dst) = FFC_REG16(src);
        }
    FFC_REG32(r + 8) = cnt & ~0x80000000u;
    if (cnt & (1u << 30))
        ffc_hal_raise_irq(1u << (8 + ch));
}
