#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t zero);
extern void *func_0205681c(uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern char data_ov004_021581c4[];
extern char data_ov004_0215819c[];

void *func_ov004_021481bc(uint32_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *node;

    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov004_021581c4;
    *(uint32_t *)((uint8_t *)self + 0x88) = c;
    *(uint8_t *)((uint8_t *)self + 0x8c) = 0;
    *(uint32_t *)((uint8_t *)self + 0x80) = a;
    *(uint32_t *)((uint8_t *)self + 0x84) = b;

    node = func_0205681c(0x1c);
    if (node != 0) {
        node[3] &= ~0xffu;
        node[0] = (uint32_t)data_ov004_0215819c;
        node[5] = (uint32_t)self;
        node[6] = d - 0x96;
    }
    func_02056bc0((uint8_t *)self + 0x48, node);
    return self;
}
