#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b15b8;

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

void func_020629cc(uint32_t a, Pair s) {
    Pair t;
    uint8_t *p = (uint8_t *)func_0205681c(0x20);
    if (p != 0) {
        *(uint32_t *)(p + 0xc) &= ~0xffu;
        uint32_t x = *(volatile uint32_t *)&s.x;
        *(uint32_t *)p = (uint32_t)&data_020b15b8;
        uint32_t y = *(volatile uint32_t *)&s.y;
        *(uint32_t *)(p + 0x14) = a;
        *(uint32_t *)(p + 0x18) = x;
        *(volatile uint32_t *)&t.x = x;
        *(volatile uint32_t *)&t.y = y;
        *(uint32_t *)(p + 0x1c) = y;
    }
}
