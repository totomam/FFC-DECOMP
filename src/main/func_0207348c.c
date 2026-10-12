#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02072c80(void *self, void *a, void *b, uint32_t c, uint32_t d);
extern void func_02087620(void *object);
extern void *func_02073570(void *a);
extern void *func_02056f0c(void *p, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern char data_020b0b68[];
extern char data_020b0b7c[];

void *func_0207348c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t *base = (uint8_t *)a;
    uint8_t *o;
    uint8_t *n;
    void *r6;
    void *node;

    base[0x21] = 0;
    base[0x22] = 0;
    base[0x23] = 0;
    r6 = func_0205681c(0xa0);
    if (r6 != 0) {
        r6 = func_02072c80(r6, a, b, c, d);
    }
    if (e != 0) {
        o = (uint8_t *)func_0205681c(0x34);
        if (o != 0) {
            *(uint32_t *)(o + 0xc) &= ~0xffu;
            *(void **)o = data_020b0b68;
            func_02087620(o + 0x1c);
            { int t0 = o[0x10]; o[0x10] = (uint8_t)(t0 & ~0xff); }
            { int t1 = o[0x11]; o[0x11] = (uint8_t)(t1 & ~0xff); }
            { int t2 = o[0x12]; o[0x12] = (uint8_t)(t2 & ~0xff); }
            *(uint32_t *)(o + 0x14) = 0;
            *(void **)(o + 0x18) = o + 0x14;
            *(void **)o = data_020b0b7c;
            { int t3 = o[0x11]; o[0x11] = (uint8_t)((t3 & ~0xff) | 1); }
        }
        n = (uint8_t *)func_02073570(a);
        node = func_0205681c(0x18);
        if (node != 0) {
            node = func_02056f0c(node, e * 0x3c);
        }
        func_02056bc0(o, node);
        func_02056bc0(o, n);
        func_02056bc0((uint8_t *)r6 + 0x48, o);
    }
    return r6;
}
