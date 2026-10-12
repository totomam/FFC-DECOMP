#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *object, uint32_t arg);
extern void *func_0206cd68(void *object);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b1db0[];
extern uint32_t data_020b0b68[];
extern uint32_t data_020b0b7c[];

void *func_0206cbf4(void *a)
{
    uint32_t *r4;
    void *r6;
    uint8_t *r5;
    uint32_t m;
    uint8_t t;

    r4 = (uint32_t *)func_0205681c(0x80);
    if (r4 != 0) {
        func_02056c9c(r4, 0);
        r4[0] = (uint32_t)data_020b1db0;
    }
    r6 = func_0206cd68(a);
    r5 = (uint8_t *)func_0205681c(0x34);
    if (r5 != 0) {
        m = 0xff;
        *(uint32_t *)(r5 + 0xc) &= ~m;
        *(uint32_t *)r5 = (uint32_t)data_020b0b68;
        func_02087620(r5 + 0x1c);
        t = r5[0x10];
        r5[0x10] = t & ~m;
        t = r5[0x11];
        r5[0x11] = t & ~m;
        t = r5[0x12];
        r5[0x12] = t & ~m;
        *(uint32_t *)(r5 + 0x14) = 0;
        *(uint8_t **)(r5 + 0x18) = r5 + 0x14;
        *(uint32_t *)r5 = (uint32_t)data_020b0b7c;
        t = r5[0x11];
        r5[0x11] = (t & ~m) | 1;
    }
    func_02056bc0(r5, r6);
    func_02056bc0(r5, r4);
    return r5;
}
