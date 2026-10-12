#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_02039594(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_02055a2c(void *a, void *b);
extern void func_02039668(void *p, uint32_t n);
extern char data_020b0b68[];
extern char data_020b0b54[];

void *func_ov002_0219ab64(uint8_t *a, uint8_t *b)
{
    uint8_t *s;
    uint8_t *t;
    uint8_t *p;
    uint8_t *q;
    uint8_t *r;
    uint32_t v;
    uint32_t n;

    s = a;
    t = b;
    p = (uint8_t *)func_0205681c(0x34);
    if (p) {
        v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        *(uint32_t *)(p + 0xc) = v;
        *(void **)p = data_020b0b68;
        func_02087620(p + 0x1c);
        v = p[0x10];
        v &= ~0xffu;
        p[0x10] = v;
        v = p[0x11];
        v &= ~0xffu;
        p[0x11] = v;
        v = p[0x12];
        v &= ~0xffu;
        p[0x12] = v;
        *(uint32_t *)(p + 0x14) = 0;
        *(void **)(p + 0x18) = p + 0x14;
        *(void **)p = data_020b0b54;
        v = p[0x11];
        v &= ~0xffu;
        p[0x11] = v | 1;
    }

    q = (uint8_t *)func_0205681c(0x60);
    if (q) {
        q = (uint8_t *)func_02039594(q, 0, 0, 0, 1);
    }

    func_02056bc0(p, q);
    s += 0x80;
    r = (uint8_t *)func_02055a2c(s, t);
    func_02056bc0(p, r);

    r = q;
    if (q) {
        r = q + 0x14;
    }
    n = *(uint32_t *)(t + 0xc);
    *(void **)(t + 0x10) = r;
    func_02039668(q, n + 1);
    return p;
}
