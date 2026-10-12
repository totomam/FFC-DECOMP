#include "ffc/types.h"

extern uint8_t *func_0205681c(uint32_t size);
extern uint8_t *func_020725a0(uint8_t *obj, uint8_t *p, void *q, uint32_t a2, uint32_t a3, uint32_t a4);
extern void func_02087620(void *object);
extern void *func_02073570(uint8_t *p);
extern void *func_02056f0c(void *block, uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b7c[];

uint8_t *func_02073214(uint8_t *p, void *q, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t n)
{
    uint8_t *obj;
    uint8_t *r5;
    void *r4;
    void *node;

    p[0x21] = 0;
    p[0x22] = 0;
    p[0x23] = 0;
    obj = func_0205681c(0xa0);
    if (obj != 0) {
        obj = func_020725a0(obj, p, q, a2, a3, a4);
    }
    if (n != 0) {
        r5 = func_0205681c(0x34);
        if (r5 != 0) {
            *(uint32_t *)(r5 + 0xc) &= ~0xffu;
            *(void **)r5 = data_020b0b68;
            func_02087620(r5 + 0x1c);
            *(volatile uint8_t *)(r5 + 0x10) = (uint32_t)*(volatile uint8_t *)(r5 + 0x10) & ~0xffu;
            *(volatile uint8_t *)(r5 + 0x11) = (uint32_t)*(volatile uint8_t *)(r5 + 0x11) & ~0xffu;
            *(volatile uint8_t *)(r5 + 0x12) = (uint32_t)*(volatile uint8_t *)(r5 + 0x12) & ~0xffu;
            *(uint32_t *)(r5 + 0x14) = 0;
            *(void **)(r5 + 0x18) = r5 + 0x14;
            *(void **)r5 = data_020b0b7c;
            *(volatile uint8_t *)(r5 + 0x11) = ((uint32_t)*(volatile uint8_t *)(r5 + 0x11) & ~0xffu) | 1;
        }
        r4 = func_02073570(p);
        node = func_0205681c(0x18);
        if (node != 0) {
            node = func_02056f0c(node, 0x3c * n);
        }
        func_02056bc0(r5, node);
        func_02056bc0(r5, r4);
        func_02056bc0(obj + 0x48, r5);
    }
    return obj;
}
