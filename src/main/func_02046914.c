#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern int data_020af924;

void *func_02046914(uint8_t *p, uint32_t a, uint8_t b, uint32_t *arr) {
    uint32_t i;
    func_02056c9c(p, 0);
    *(void **)p = &data_020af924;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint8_t *)(p + 0x90) = b;
    *(uint32_t *)(p + 0xa0) = 0;
    *(uint32_t *)(p + 0xa4) = 0;
    for (i = 0; i < 3; i++) {
        uint32_t off = i << 2;
        *(uint32_t *)(p + off + 0x94) = *(uint32_t *)((uint8_t *)arr + off) - 1;
    }
    return p;
}
