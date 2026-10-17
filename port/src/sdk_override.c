/* SDK overrides for the host port: replaces SDK functions that talk to the ARM7 (PXI FIFO) or to hardware the
 * HAL does not emulate. Any symbol defined in port/src is skipped by tools/port_lift.py, so defining func_X here
 * replaces the lifted ROM code. Names are from docs/sdk_map.txt. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "coro.h"
#include "hal.h"

#define PXI_TAG_MAX 32
#define SYSWORK 0x02fffc00u /* OSSystemWork (HW_MAIN_MEM_SYSTEM, 0x027ffc00 mirror) */
#define PXI_HANDLE_CHECKER(proc) FFC_REG32(SYSWORK + 0x388 + 4 * (proc))

typedef void (*pxi_callback)(uint32_t tag, uint32_t data, uint32_t err);
extern pxi_callback data_021418c8[PXI_TAG_MAX]; /* FifoRecvCallbackTable */

static int ffc_trace = -1;

static int trace(void)
{
    if (ffc_trace < 0)
        ffc_trace = getenv("FFC_TRACE") != NULL;
    return ffc_trace;
}

/* ---- ARM7 stand-in: ARM9 -> ARM7 words are handled by ffc_arm7_recv, replies queue up and are delivered to the
 * ARM9 FifoRecvCallbackTable (as PXIi_HandlerRecvFifoNotEmpty would) outside of the sender. */
struct pxi_msg {
    uint32_t tag, data, err;
};
static struct pxi_msg reply_q[256];
static unsigned reply_head, reply_tail;
static int delivering;

static void arm7_reply(uint32_t tag, uint32_t data, uint32_t err)
{
    if (reply_tail - reply_head >= 256) {
        fprintf(stderr, "ffc: pxi reply queue full\n");
        abort();
    }
    reply_q[reply_tail++ % 256] = (struct pxi_msg){tag, data, err};
}

void ffc_pxi_deliver(void)
{
    if (delivering)
        return;
    delivering = 1;
    while (reply_head != reply_tail) {
        struct pxi_msg m = reply_q[reply_head++ % 256];
        pxi_callback cb = data_021418c8[m.tag];
        if (trace())
            fprintf(stderr, "ffc: pxi 7->9 tag %u data %#x err %u%s\n", m.tag, m.data, m.err, cb ? "" : " (dropped)");
        if (cb)
            cb(m.tag, m.data, m.err);
    }
    delivering = 0;
}

static void ffc_arm7_recv(uint32_t tag, uint32_t data, uint32_t err)
{
    if (trace())
        fprintf(stderr, "ffc: pxi 9->7 tag %u data %#x err %u\n", tag, data, err);
    switch (tag) {
    default:
        fprintf(stderr, "ffc: pxi tag %u (data %#x) not emulated\n", tag, data);
        break;
    }
}

/* PXI_InitFifo: no handshake with the ARM7; every ARM7 FIFO handler counts as registered. */
void func_02089100(void)
{
    int i;
    PXI_HANDLE_CHECKER(0) = 0;
    PXI_HANDLE_CHECKER(1) = 0xffffffffu;
    for (i = 0; i < PXI_TAG_MAX; i++)
        data_021418c8[i] = NULL;
}

/* PXI_SendWordByFifo(tag, data, err) -> PXI_FIFO_SUCCESS */
int func_02089218(uint32_t tag, uint32_t data, uint32_t err)
{
    ffc_arm7_recv(tag & 31, data & 0x3ffffff, err & 1);
    ffc_pxi_deliver();
    return 0;
}

/* OSi_SyncWithOtherProc(type, syncBuf): shared-memory handshake with the ARM7; done at once. */
void func_020867f4(uint32_t type, uint32_t buf)
{
    (void)type;
    FFC_REG8(buf + 2) = 1; /* finish */
    FFC_REG8(buf + 3) = 1; /* conf */
}

/* ---- OS threads: each OSContext gets a host coroutine. OS_SaveContext only notes which context the running
 * coroutine belongs to; OS_LoadContext switches coroutines. The one caller pairing them, OSi_RescheduleThread,
 * does nothing between a resumed OS_SaveContext's `return TRUE` and its end, so returning from OS_LoadContext in
 * the resumed thread is equivalent. */
#define CTX_R0 4
#define CTX_LR 60
#define CTX_PC_PLUS4 64
#define THREAD_STACK (1u << 20)

struct ctx_entry {
    uint32_t ctx;
    struct ffc_coro *coro;
    int fresh; /* OS_InitContext ran since the coroutine was made */
};
static struct ctx_entry ctxs[64];
static int nctxs;
static struct ffc_coro *zombie; /* abandoned coroutine still running; freed after the next switch */

static struct ctx_entry *ctx_entry(uint32_t ctx)
{
    int i;
    for (i = 0; i < nctxs; i++)
        if (ctxs[i].ctx == ctx)
            return &ctxs[i];
    if (nctxs == 64) {
        fprintf(stderr, "ffc: too many OS contexts\n");
        abort();
    }
    ctxs[nctxs] = (struct ctx_entry){ctx, NULL, 0};
    return &ctxs[nctxs++];
}

/* Free a coroutine that is not running and forget it. */
static void drop_coro(struct ffc_coro *c)
{
    int i;
    for (i = 0; i < nctxs; i++)
        if (ctxs[i].coro == c)
            ctxs[i].coro = NULL;
    ffc_coro_free(c);
}

static void reap_zombie(void)
{
    if (zombie && zombie != ffc_coro_self()) {
        drop_coro(zombie);
        zombie = NULL;
    }
}

typedef uint32_t (*arm_fn)(uint32_t, uint32_t, uint32_t, uint32_t);

static void thread_entry(void *p)
{
    uint32_t ctx = (uint32_t)(uintptr_t)p;
    arm_fn fn = (arm_fn)(uintptr_t)((FFC_REG32(ctx + CTX_PC_PLUS4) - 4) & ~1u);
    arm_fn lr = (arm_fn)(uintptr_t)(FFC_REG32(ctx + CTX_LR) & ~1u);
    reap_zombie();
    if (trace())
        fprintf(stderr, "ffc: thread ctx %#x starts %p\n", ctx, (void *)fn);
    fn(FFC_REG32(ctx + CTX_R0), FFC_REG32(ctx + CTX_R0 + 4), FFC_REG32(ctx + CTX_R0 + 8), FFC_REG32(ctx + CTX_R0 + 12));
    if (lr)
        lr(0, 0, 0, 0);
    fprintf(stderr, "ffc: thread ctx %#x returned with no lr\n", ctx);
    abort();
}

/* OS_InitContext(ctx, newpc, newsp): the context fields as on hardware, plus a fresh coroutine on next load. */
void func_020872d8(uint32_t ctx, uint32_t pc, uint32_t sp)
{
    struct ctx_entry *e = ctx_entry(ctx);
    int i;
    FFC_REG32(ctx + CTX_PC_PLUS4) = pc + 4;
    FFC_REG32(ctx + 0x44) = sp; /* sp_svc */
    sp -= 0x40;                 /* HW_SVC_STACK_SIZE */
    if (sp & 4)
        sp -= 4;
    FFC_REG32(ctx + 56) = sp;
    FFC_REG32(ctx) = (pc & 1) ? 0x3f : 0x1f;
    for (i = 0; i < 13; i++)
        FFC_REG32(ctx + CTX_R0 + 4 * i) = 0;
    FFC_REG32(ctx + CTX_LR) = 0;
    e->fresh = 1;
}

static struct ffc_coro *pending_save;

/* OS_SaveContext(ctx) -> FALSE ("just saved"); the TRUE return is OS_LoadContext returning in the resumed thread. */
uint32_t func_02087344(uint32_t ctx)
{
    struct ctx_entry *e = ctx_entry(ctx);
    e->coro = ffc_coro_self();
    e->fresh = 0;
    pending_save = e->coro;
    return 0;
}

/* OS_LoadContext(ctx) */
void func_02087390(uint32_t ctx)
{
    struct ctx_entry *e = ctx_entry(ctx);
    struct ffc_coro *self = ffc_coro_self();
    int saved = pending_save == self;
    pending_save = NULL;
    if (e->fresh || !e->coro) {
        if (e->coro == self)
            saved = 0; /* the running thread re-inited its own context (OS_ExitThread): abandon this stack */
        else if (e->coro)
            drop_coro(e->coro);
        e->coro = ffc_coro_new(thread_entry, (void *)(uintptr_t)ctx, THREAD_STACK);
        e->fresh = 0;
    }
    if (!saved) {
        reap_zombie();
        zombie = self; /* never resumed: freed by whoever runs next */
    }
    ffc_coro_switch(e->coro);
    reap_zombie(); /* resumed */
}

/* MIi_DmaSetParameters(ch, src, dst, cnt, mode): as the ROM, then the HAL runs the transfer. */
void func_01ff8f28(uint32_t ch, uint32_t src, uint32_t dst, uint32_t cnt, uint32_t mode)
{
    uint32_t r = 0x040000b0u + ch * 12, fill = 0x040000e0u + ch * 4; /* MIi_DMA_CLEAR_DATA_BUF */
    if (mode & 0x10) {
        FFC_REG32(fill) = src;
        src = fill;
    } else if (mode & 0x20) {
        FFC_REG16(fill) = (uint16_t)src;
        src = fill;
    }
    FFC_REG32(r) = src;
    FFC_REG32(r + 4) = dst;
    FFC_REG32(r + 8) = cnt;
    ffc_hal_dma_kick(ch);
}

/* ---- Game card: ROM reads come from the ROM file (ffc_rom, loaded by the HAL); no card registers. */
#define BOOT_CHECK_INFO 0x02fffc00u /* HW_BOOT_CHECK_INFO_BUF: card ID the IPL saw */

/* CARDi_ReadRomWithCPU(userdata, buffer, offset, length) -> bytes read */
uint32_t func_0207d67c(uint32_t userdata, uint32_t buf, uint32_t off, uint32_t len)
{
    (void)userdata;
    if (trace())
        fprintf(stderr, "ffc: card read %#x+%#x -> %#x\n", off, len, buf);
    if (off >= ffc_rom_size || len > ffc_rom_size - off) {
        fprintf(stderr, "ffc: card read %#x+%#x past the ROM end\n", off, len);
        abort();
    }
    memcpy((void *)(uintptr_t)buf, ffc_rom + off, len);
    return len;
}

/* CARDi_IsRomDmaAvailable: no card DMA, reads take the CPU path. */
uint32_t func_0207d830(uint32_t dma, uint32_t dst, uint32_t src, uint32_t len)
{
    (void)dma, (void)dst, (void)src, (void)len;
    return 0;
}

/* CARDi_ReadRomIDCore: the ID the IPL stored, so the pulled-out check passes. */
uint32_t func_0207d55c(void)
{
    return FFC_REG32(BOOT_CHECK_INFO);
}

/* CARDi_ReadRomStatusCore */
uint32_t func_0207d5ac(void)
{
    return 0;
}

/* CARDi_RefreshRomCore */
void func_0207d644(void)
{
}

/* CARDi_ReadRomSyncCore(common): src/main/func_0207d8b0.c matches the ROM only because the ID read by
 * CARDi_ReadRomIDCore stays in r0 for CARDi_CheckPulledOutCore; on the host the argument is passed explicitly. */
extern void *data_02140e00[];
extern uint32_t *data_021407c0;
void func_0207db64(uint32_t id);
void func_0207d600(uint32_t warn_mask);
void func_0207d8b0(uint8_t *p)
{
    ((void (*)(int, uint32_t, uint32_t, uint32_t))data_02140e00[1])(0, FFC_REG32((uintptr_t)p + 0x500),
                                                                     FFC_REG32((uintptr_t)p + 0x4fc),
                                                                     FFC_REG32((uintptr_t)p + 0x504));
    func_0207db64(func_0207d55c());
    func_0207d600(8);
    *data_021407c0 = 0; /* cmd->result = CARD_RESULT_SUCCESS */
}

/* FS_SetCurrentDirectory(path): src/main/func_0207e220.c keeps baseid apart from the rest of
 * FSArgumentForFindPath (adjacent on the mwcc stack only). */
extern void *func_0207e2d4(const char *path, uint32_t *baseid, char *relpath); /* FS_NormalizePath */
extern void func_0208bcc8(void *dst, const void *src, uint32_t n);              /* STD_CopyLString */
extern void func_0207e890(void *file);                                           /* FS_InitFile */
extern uint32_t func_0207e0f4(void *file, uint32_t command, uint32_t blocking);  /* FSi_SendCommand */
extern uint8_t data_021410cc[]; /* current_dir_pos */
extern uint8_t data_021411dc[]; /* current_dir_path */
uint32_t func_0207e220(const char *path)
{
    char relpath[0x104];
    uint32_t file[18];
    struct {
        uint32_t baseid;
        const char *relpath;
        uint32_t target_id, target_is_directory;
    } arg = {0};
    uint32_t *arc = (uint32_t *)func_0207e2d4(path, &arg.baseid, relpath);
    if (!arc)
        return 0;
    *(uint32_t *)(data_021410cc + 4) = (uint32_t)(uintptr_t)arc;
    *(uint16_t *)(data_021410cc + 8) = 0;
    *(uint16_t *)(data_021410cc + 0xa) = 0;
    *(uint32_t *)(data_021410cc + 0xc) = 0;
    func_0208bcc8(data_021411dc, relpath, 0x104);
    if (((uint32_t *)(uintptr_t)arc[9])[4] != 0) { /* arc->vtbl->FindPath */
        func_0207e890(file);
        file[2] = (uint32_t)(uintptr_t)arc;
        file[4] = (uint32_t)(uintptr_t)&arg;
        arg.relpath = relpath;
        arg.target_is_directory = 1;
        if (func_0207e0f4(file, 4, 1)) {
            *(uint16_t *)(data_021410cc + 8) = (uint16_t)arg.target_id;
            func_0208bcc8(data_021411dc, relpath, 0x104);
        }
    }
    return 1;
}

/* OS_Halt (asm: mcr p15 wait-for-interrupt). The idle thread halts until an interrupt: advance one frame. */
void func_02088f94(void)
{
    ffc_hal_vblank();
}
