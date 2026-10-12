#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020b281c[];
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b7c[];
extern uint8_t data_020b0b54[];
extern uint32_t data_020b2844[];

uint8_t *func_020767a4(uint8_t *self, uint32_t a, uint32_t b, uint32_t c,
                       uint32_t p5, uint32_t p6, uint32_t p7)
{
    uint8_t *node;

    func_02056c9c(self, 0);
    *(void **)self = data_020b281c;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x90) = c;
    *(uint8_t *)(self + 0x98) = 0;
    *(uint8_t *)(self + 0x99) = 0;
    *(uint32_t *)(self + 0xa8) = p5;
    *(uint32_t *)(self + 0xac) = p6;
    *(uint32_t *)(self + 0xb4) = p7;

    node = func_0205681c(0x34);
    if (node != 0) {
        *(uint32_t *)(node + 0xc) &= ~0xffu;
        *(void **)node = data_020b0b68;
        func_02087620(node + 0x1c);
        node[0x10] = (uint8_t)(node[0x10] & ~0xffu);
        node[0x11] = (uint8_t)(node[0x11] & ~0xffu);
        node[0x12] = (uint8_t)(node[0x12] & ~0xffu);
        *(uint32_t *)(node + 0x14) = 0;
        *(void **)(node + 0x18) = node + 0x14;
        *(void **)node = data_020b0b7c;
        node[0x11] = (uint8_t)(node[0x11] & ~0xffu);
    }
    *(void **)(self + 0x9c) = node;
    func_02056bc0(self + 0x48, node);

    node = func_0205681c(0x34);
    if (node != 0) {
        *(uint32_t *)(node + 0xc) &= ~0xffu;
        *(void **)node = data_020b0b68;
        func_02087620(node + 0x1c);
        node[0x10] = (uint8_t)(node[0x10] & ~0xffu);
        node[0x11] = (uint8_t)(node[0x11] & ~0xffu);
        node[0x12] = (uint8_t)(node[0x12] & ~0xffu);
        *(uint32_t *)(node + 0x14) = 0;
        *(void **)(node + 0x18) = node + 0x14;
        *(void **)node = data_020b0b54;
        node[0x11] = (uint8_t)(node[0x11] & ~0xffu);
    }
    *(void **)(self + 0xa0) = node;
    func_02056bc0(self + 0x48, node);

    {
        uint32_t *d = (uint32_t *)data_020b2844;
        uint32_t v0 = d[0];
        uint32_t v1 = d[1];
        *(uint32_t *)(self + 0x88) = v0;
        *(uint32_t *)(self + 0x8c) = v1;
    }
    return self;
}
