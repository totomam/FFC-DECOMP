#include "ffc/types.h"

extern void func_020849ac(uint32_t v, void *p, uint32_t n);
extern void func_02084a0c(uint32_t v, void *p, uint32_t n);
extern void func_020849c4(const void *src, void *dst, uint32_t n);
extern int func_ov006_0219af04(uint32_t a, void *p, uint32_t b);
extern uint32_t func_ov006_0219afcc(uint32_t a);

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint8_t b18;
} Src;

void func_ov006_0219ae4c(void *a, Src *q, const void *c)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t off = 0x13 << 6;
    uint32_t n;
    int f1;
    int f2;
    int t;

    func_020849ac(0, p, off);
    off -= 0xE;
    p[off] = 0;

    f1 = 1;
    if (func_ov006_0219af04(q->wc, p, 1) != 0) {
        f1 = 0;
    }
    f2 = 0;
    if (func_ov006_0219af04(q->w10, p, 0) == 0) {
        f2 = 1;
    }
    t = f1 | f2;
    if (t) {
        p[0x4B2] = 1;
        func_02084a0c(0, p, 0x220);
    }
    *(uint32_t *)(p + 0x4B8) = q->w14;
    if (c != 0) {
        func_020849c4(c, p + 0x220, 0x16);
    }
    off = 0x236;
    p[off] = q->b18;
    n = func_ov006_0219afcc(q->w4);
    func_020849c4(q->w4, p + (off + 2), (uint16_t)(n * 2));
    off += 0x62;
    func_020849c4(q->w8, p + off, 0xC0);
    p[0x358] = 1;
    *(uint16_t *)(p + 0x35A) = 1;
    *(uint16_t *)(p + 0x4B0) = 1;
}
