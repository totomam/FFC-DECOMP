#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_020375f4(uint32_t mask);
extern void func_020375bc(uint32_t mask);
extern void func_0201e954(void *a, uint32_t b, void *c);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036ce8(const void *object);
extern uint32_t func_02036d18(const void *object);
extern void *func_ov004_02152d74(void *a, uint32_t b, uint32_t c, uint32_t d,
                                 uint32_t e, uint32_t f, uint32_t g,
                                 uint32_t h, uint32_t i, uint32_t j, uint32_t k,
                                 uint32_t l);
extern void func_02056bc0(void *object, void *node);

void func_020419c0(void *arg0)
{
    uint8_t *p = (uint8_t *)arg0;
    uint32_t local[6];
    uint32_t mode;
    void *node;

    mode = *(uint32_t *)(p + 0x88);
    *(uint32_t *)(p + 0x88) = *(uint32_t *)(p + 0x88) + 1;

    switch (mode) {
    case 0: {
        func_020375f4(0x20);
        func_0201e954(data_020b93b8, *(uint32_t *)(p + 0x80), local);
        node = func_0205681c(0x388);
        if (node != 0) {
            uint32_t a = func_02036cd8(local);
            uint32_t b = func_02036ce8(local);
            uint32_t c = func_02036d18(local);
            node = func_ov004_02152d74(node, a, *(uint32_t *)(p + 0x84), b, c,
                                       1, *(uint32_t *)(p + 0x80), 0, 0, 0, 0, 0);
        }
        func_02056bc0(p + 0x14, node);
        break;
    }
    case 1: {
        func_020375bc(0);
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        break;
    }
    default:
        break;
    }
}
