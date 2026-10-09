#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_020b2744[];

void *func_0207665c(void *a, uint32_t b) {
    func_02056c9c(a, 0);
    *(uint8_t **)a = data_020b2744;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    *(uint32_t *)((uint8_t *)a + 0x84) = 0;
    return a;
}
