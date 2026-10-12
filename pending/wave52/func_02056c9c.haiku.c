#include "ffc/types.h"

extern void func_02087620(void *object);
extern char data_020b0bd8[];
extern char data_020b0b68[];
extern char data_020b0b7c[];
extern char data_020b0b54[];
extern uint32_t data_0213df20;

#define VB(a) (*(volatile uint8_t *)(a))

uint8_t *func_02056c9c(uint8_t *p, uint32_t r6) {
    uint8_t *r5;
    uint32_t m = 0xff;
    void *vt68 = data_020b0b68;

    *(uint32_t *)(p + 0xc) &= ~m;
    *(void **)p = data_020b0bd8;
    r5 = p + 0x14;
    *(uint32_t *)(r5 + 0xc) &= ~m;
    *(void **)(p + 0x14) = vt68;
    func_02087620(r5 + 0x1c);
    VB(r5 + 0x10) &= ~m;
    *(void **)(p + 0x48) = vt68;
    VB(r5 + 0x11) &= ~m;
    VB(r5 + 0x12) &= ~m;
    *(uint32_t *)(r5 + 0x14) = 0;
    *(uint8_t **)(r5 + 0x18) = r5 + 0x14;
    *(void **)(p + 0x14) = data_020b0b7c;
    VB(r5 + 0x11) &= ~m;

    r5 = p + 0x48;
    *(uint32_t *)(r5 + 0xc) &= ~m;
    func_02087620(r5 + 0x1c);
    VB(r5 + 0x10) &= ~m;
    VB(r5 + 0x11) &= ~m;
    VB(r5 + 0x12) &= ~m;
    *(uint32_t *)(r5 + 0x14) = 0;
    *(uint8_t **)(r5 + 0x18) = r5 + 0x14;
    *(void **)(p + 0x48) = data_020b0b54;
    VB(r5 + 0x11) &= ~m;

    VB(p + 0x24) = (VB(p + 0x24) & ~m) | 1;
    VB(p + 0x58) = (VB(p + 0x58) & ~m) | 1;
    if (r6 == 0) {
        r6 = data_0213df20;
    }
    *(uint32_t *)(p + 0x7c) = r6;
    return p;
}
