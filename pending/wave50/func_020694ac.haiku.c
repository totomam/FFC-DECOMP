#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern char data_020b1abc[];
extern uint32_t data_020b1b20[];

void func_020694ac(void *self, uint32_t a, uint32_t b)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *q;
    uint32_t v0, v1;

    func_02056c9c(self, 0);
    *(void **)p = (void *)data_020b1abc;
    *(uint32_t *)(p + 0x88) = a;
    *(uint32_t *)(p + 0x8c) = b;
    q = (uint32_t *)(p + 0xa4);
    *(uint8_t *)(p + 0x98) = 1;
    *(uint32_t *)(p + 0x9c) = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *q = 0;
    q[2] = (uint32_t)(q + 1);
    *(uint8_t *)(p + 0xb1) = 0;
    *(uint8_t *)(p + 0xb2) = 0;
    *(uint8_t *)(p + 0xb3) = 1;
    *(uint8_t *)(p + 0xb4) = 1;
    q[1] = 0;
    v0 = data_020b1b20[0];
    v1 = data_020b1b20[1];
    *(uint32_t *)(p + 0x80) = v0;
    *(uint32_t *)(p + 0x84) = v1;
}
