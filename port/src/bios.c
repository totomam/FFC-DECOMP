/* C replacements for the ARM9 BIOS swi stubs (src/main/{Div,CpuSet,...}.c are asm and skipped in port builds).
 * Semantics follow GBATEK; callers pass the BIOS register arguments as C arguments. */
#include "hal.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

void ffc_trap(const char *);

int Div(int number, int denom)
{
    return denom ? number / denom : 0;
}

int Mod(int number, int denom)
{
    return denom ? number % denom : 0;
}

uint16_t Sqrt(uint32_t x)
{
    uint32_t r = 0, b = 1u << 30;
    while (b > x)
        b >>= 2;
    while (b) {
        if (x >= r + b) {
            x -= r + b;
            r = (r >> 1) + b;
        } else {
            r >>= 1;
        }
        b >>= 2;
    }
    return (uint16_t)r;
}

/* control: bits 0-20 count, bit 24 fill, bit 26 32-bit units */
void CpuSet(const void *src, void *dst, uint32_t control)
{
    uint32_t n = control & 0x1fffff, i;
    int fill = (control >> 24) & 1;
    if (control & (1u << 26)) {
        const uint32_t *s = src;
        uint32_t *d = dst;
        for (i = 0; i < n; i++)
            d[i] = fill ? s[0] : s[i];
    } else {
        const uint16_t *s = src;
        uint16_t *d = dst;
        for (i = 0; i < n; i++)
            d[i] = fill ? s[0] : s[i];
    }
}

void CpuFastSet(const void *src, void *dst, uint32_t control)
{
    CpuSet(src, dst, (((control & 0x1fffff) + 7) & ~7u) | (control & (1u << 24)) | (1u << 26));
}

uint16_t GetCRC16(uint32_t crc, const void *data, uint32_t size)
{
    static const uint16_t val[] = {0xc0c1, 0xc181, 0xc301, 0xc601, 0xcc01, 0xd801, 0xf001, 0xa001};
    const uint8_t *p = data;
    uint32_t i, j;
    for (i = 0; i < size; i++) {
        crc ^= p[i];
        for (j = 0; j < 8; j++)
            crc = (crc & 1) ? (crc >> 1) ^ ((uint32_t)val[j] << (7 - j)) : crc >> 1;
    }
    return (uint16_t)crc;
}

void Halt(void)
{
    ffc_hal_vblank();
}

/* discard: clear matching check flags first; waits until (HW_INTR_CHECK_BUF & mask) */
void IntrWait(int discard, uint32_t mask)
{
    volatile uint32_t *chk = (volatile uint32_t *)(uintptr_t)FFC_INTR_CHECK_BUF;
    if (discard)
        *chk &= ~mask;
    for (;;) {
        if (*chk & mask) {
            *chk &= ~mask;
            return;
        }
        ffc_hal_vblank();
    }
}

void VBlankIntrWait(void)
{
    IntrWait(1, FFC_IRQ_VBLANK);
}

int IsDebugger(void)
{
    return 0;
}

void SoftReset(void)
{
    extern void ffc_trap(const char *);
    ffc_trap("SoftReset");
}

void WaitByLoop(int32_t count)
{
    (void)count;
}

void BitUnPack(const void *src, void *dest, const void *param)
{
    const struct {
        uint16_t len;
        uint8_t src_w, dst_w;
        uint32_t offset; /* bit 31: add offset to zero data too */
    } *p = param;
    const uint8_t *s = src;
    uint32_t *d = dest, out = 0, outbits = 0, i, b;
    uint32_t smask = (1u << p->src_w) - 1;
    for (i = 0; i < p->len; i++) {
        for (b = 0; b < 8; b += p->src_w) {
            uint32_t v = (s[i] >> b) & smask;
            if (v || (p->offset >> 31))
                v += p->offset & 0x7fffffff;
            out |= v << outbits;
            outbits += p->dst_w;
            if (outbits >= 32) {
                *d++ = out;
                out = outbits = 0;
            }
        }
    }
}

static void lz77(const uint8_t *s, uint8_t *d)
{
    uint32_t size = (s[1] | s[2] << 8 | s[3] << 16), n = 0;
    s += 4;
    while (n < size) {
        uint8_t flags = *s++;
        int i;
        for (i = 0; i < 8 && n < size; i++, flags <<= 1) {
            if (flags & 0x80) {
                uint32_t len = (s[0] >> 4) + 3, disp = ((s[0] & 0xf) << 8 | s[1]) + 1;
                s += 2;
                while (len-- && n < size) {
                    d[n] = d[n - disp];
                    n++;
                }
            } else {
                d[n++] = *s++;
            }
        }
    }
}

static void rl(const uint8_t *s, uint8_t *d)
{
    uint32_t size = (s[1] | s[2] << 8 | s[3] << 16), n = 0;
    s += 4;
    while (n < size) {
        uint8_t f = *s++;
        uint32_t len;
        if (f & 0x80) {
            len = (f & 0x7f) + 3;
            while (len-- && n < size)
                d[n++] = *s;
            s++;
        } else {
            len = (f & 0x7f) + 1;
            while (len-- && n < size)
                d[n++] = *s++;
        }
    }
}

void LZ77UnCompReadNormalWrite8bit(const void *src, void *dest)
{
    lz77(src, dest);
}

void RLUnCompReadNormalWrite8bit(const void *src, void *dest)
{
    rl(src, dest);
}

/* Stream callbacks (MIReadStreamCallbacks): init(src, dest, param) -> s32, terminate(src) -> s32,
 * read8(src) -> u8, read16, read32. The BIOS calls read8 with an advancing src pointer. Expand into a scratch
 * buffer then run the plain decoder. */
typedef struct {
    int32_t (*init)(const uint8_t *src, uint8_t *dest, const void *param);
    int32_t (*terminate)(const uint8_t *src);
    uint8_t (*read8)(const uint8_t *src);
    uint16_t (*read16)(const uint8_t *src);
    uint32_t (*read32)(const uint8_t *src);
} ffc_stream_cb;

static int cb_uncomp(const uint8_t *src, uint8_t *dest, const void *param, const ffc_stream_cb *cb, int kind)
{
    static uint8_t buf[4 << 20];
    uint32_t hdr, size, n = 0, i;
    int32_t r = 0;
    if (cb->init && (r = cb->init(src, dest, param)) < 0)
        return r;
    hdr = cb->read32(src);
    src += 4;
    size = hdr >> 8;
    memcpy(buf, &hdr, 4);
    /* Compressed data is never larger than ~9/8 of the output plus the header. */
    for (i = 0; i < size + size / 8 + 16 && 4 + i < sizeof buf; i++)
        buf[4 + i] = cb->read8(src++);
    if (kind == 0x10)
        lz77(buf, dest);
    else
        rl(buf, dest);
    (void)n;
    if (cb->terminate)
        r = cb->terminate(src);
    return r < 0 ? r : (int)size;
}

int LZ77UnCompReadByCallbackWrite16bit(const void *src, void *dest, const void *param, const void *callbacks)
{
    return cb_uncomp(src, dest, param, callbacks, 0x10);
}

int RLUnCompReadByCallbackWrite16bit(const void *src, void *dest, const void *param, const void *callbacks)
{
    return cb_uncomp(src, dest, param, callbacks, 0x30);
}

int HuffUnCompReadByCallback(const void *src, void *dest, const void *param, const void *callbacks)
{
    extern void ffc_trap(const char *);
    (void)src, (void)dest, (void)param, (void)callbacks;
    ffc_trap("HuffUnCompReadByCallback");
    return -1;
}

/* `swi` inside code lifted by tools/port_lift.py: r[0..3] in/out. */
void ffc_lift_swi(uint32_t n, uint32_t *r)
{
    const void *p0 = (const void *)(uintptr_t)r[0], *p1 = (const void *)(uintptr_t)r[1];
    const void *p2 = (const void *)(uintptr_t)r[2], *p3 = (const void *)(uintptr_t)r[3];
    switch (n) {
    case 0x00: SoftReset(); break;
    case 0x03: WaitByLoop((int32_t)r[0]); break;
    case 0x04: IntrWait((int)r[0], r[1]); break;
    case 0x05: VBlankIntrWait(); break;
    case 0x06: Halt(); break;
    case 0x09: {
        int q = Div((int)r[0], (int)r[1]), m = Mod((int)r[0], (int)r[1]);
        r[0] = (uint32_t)q; r[1] = (uint32_t)m; r[3] = (uint32_t)(q < 0 ? -q : q);
        break;
    }
    case 0x0b: CpuSet(p0, (void *)p1, r[2]); break;
    case 0x0c: CpuFastSet(p0, (void *)p1, r[2]); break;
    case 0x0d: r[0] = Sqrt(r[0]); break;
    case 0x0e: r[0] = GetCRC16(r[0], p1, r[2]); break;
    case 0x0f: r[0] = (uint32_t)IsDebugger(); break;
    case 0x10: BitUnPack(p0, (void *)p1, p2); break;
    case 0x11: LZ77UnCompReadNormalWrite8bit(p0, (void *)p1); break;
    case 0x12: r[0] = (uint32_t)LZ77UnCompReadByCallbackWrite16bit(p0, (void *)p1, p2, p3); break;
    case 0x13: r[0] = (uint32_t)HuffUnCompReadByCallback(p0, (void *)p1, p2, p3); break;
    case 0x14: RLUnCompReadNormalWrite8bit(p0, (void *)p1); break;
    case 0x15: r[0] = (uint32_t)RLUnCompReadByCallbackWrite16bit(p0, (void *)p1, p2, p3); break;
    default: {
        char msg[32];
        snprintf(msg, sizeof msg, "swi %#x", (unsigned)n);
        ffc_trap(msg);
    }
    }
}
