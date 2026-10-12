#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern char data_020b2450[];

void *func_020725a0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    uint8_t *q = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(void **)p = data_020b2450;
    *(uint32_t *)(q + 0x80) = a;
    *(uint32_t *)(q + 0x84) = b;
    *(uint32_t *)(q + 0x88) = c;
    *(uint32_t *)(q + 0x8c) = d;
    *(uint32_t *)(q + 0x90) = e;
    *(uint32_t *)(q + 0x94) = 0;
    *(uint32_t *)(q + 0x98) = 0;
    *(uint32_t *)(q + 0x9c) = 0;
    return p;
}
