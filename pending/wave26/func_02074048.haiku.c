#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_020b2420[];

void *func_02074048(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t *p = (uint32_t *)func_0205681c(0x8c);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint8_t **)p = data_020b2420;
        *(uint32_t *)((uint8_t *)p + 0x80) = a;
        *(uint32_t *)((uint8_t *)p + 0x84) = b;
        *(uint32_t *)((uint8_t *)p + 0x88) = c;
    }
    return p;
}
