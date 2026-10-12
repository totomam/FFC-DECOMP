#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020727c8(void *obj, void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02087620(void *object);
extern void *func_02073570(void *p);
extern void *func_02056f0c(void *p, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern char data_020b0b68[];
extern char data_020b0b7c[];

void *func_020732e4(uint8_t *self, void *a1, uint32_t a2, uint32_t a3, uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8, uint32_t s9)
{
    uint8_t *obj;
    uint8_t *r5;
    void *r4;
    uint32_t *w;

    self[0x21] = 0;
    self[0x22] = 0;
    self[0x23] = 0;

    obj = func_0205681c(0xac);
    if (obj) {
        obj = func_020727c8(obj, self, (uint32_t)a1, a2, a3, s5, s6, s7, s8);
    }

    if (s9) {
        r5 = func_0205681c(0x34);
        if (r5) {
            w = (uint32_t *)r5;
            w[3] &= ~0xffu;
            w[0] = (uint32_t)data_020b0b68;
            func_02087620(r5 + 0x1c);
            { int v = r5[0x10]; v &= ~0xff; r5[0x10] = v; }
            { int v = r5[0x11]; v &= ~0xff; r5[0x11] = v; }
            { int v = r5[0x12]; v &= ~0xff; r5[0x12] = v; }
            w[5] = 0;
            w[6] = (uint32_t)(r5 + 0x14);
            w[0] = (uint32_t)data_020b0b7c;
            { int v = r5[0x11]; v &= ~0xff; r5[0x11] = v | 1; }
        }
        r4 = func_02073570(self);
        {
            void *t = func_0205681c(0x18);
            void *n = t;
            if (t) {
                n = func_02056f0c(t, s9 * 0x3c);
            }
            func_02056bc0(r5, n);
        }
        func_02056bc0(r5, r4);
        func_02056bc0(obj + 0x48, r5);
    }

    return obj;
}
