#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t func_02060598(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020605c0(void *a, uint32_t b);
extern uint32_t func_020605e8(void *a, uint32_t b);
extern uint32_t func_02060684(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern char data_020b0b68[];
extern char data_020b0b7c[];

void *func_02060870(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    uint8_t *o;
    volatile uint8_t *v;
    uint32_t m;

    m = 0xff;
    o = (uint8_t *)func_0205681c(0x34);
    if (o != 0) {
        *(uint32_t *)(o + 0xc) &= ~m;
        *(void **)o = data_020b0b68;
        func_02087620(o + 0x1c);
        v = o + 0x10;
        *v = (uint8_t)(*v & ~m);
        v = o + 0x11;
        *v = (uint8_t)(*v & ~m);
        v = o + 0x12;
        *v = (uint8_t)(*v & ~m);
        *(uint32_t *)(o + 0x14) = 0;
        *(void **)(o + 0x18) = o + 0x14;
        *(void **)o = data_020b0b7c;
        v = o + 0x11;
        *v = (uint8_t)(*v & ~m);
    }
    v = o + 0x11;
    *v = (uint8_t)((*v & ~m) | 1);
    func_02056bc0(o, (void *)func_02060598(a, 1));
    func_02056bc0(o, (void *)func_020605c0(a, b));
    func_02056bc0(o, (void *)func_020605e8(a, 0x3f ^ b));
    func_02056bc0(o, (void *)func_02060684(a, c, d, 0x10 - c, 0x10 - d, e, f, g));
    return o;
}
