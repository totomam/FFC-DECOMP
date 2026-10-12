#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *p);
extern uint32_t data_020b1abc[];
extern Pair data_020b1b28;

void *func_02069528(void *self, uint32_t unused, uint32_t a, uint32_t b)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t *p;
    func_02056c9c(self);
    *(void **)s = (void *)data_020b1abc;
    *(uint32_t *)(s + 0x88) = a;
    *(uint32_t *)(s + 0x8c) = b;
    *(uint8_t *)(s + 0x98) = 1;
    *(uint32_t *)(s + 0x9c) = 0;
    *(uint32_t *)(s + 0xa0) = 0;
    p = (uint32_t *)(s + 0xa4);
    *p = 0;
    p[2] = (uint32_t)(p + 1);
    *(uint8_t *)(s + 0xb1) = 0;
    p[1] = 0;
    *(uint8_t *)(s + 0xb2) = 0;
    *(uint8_t *)(s + 0xb3) = 1;
    *(uint8_t *)(s + 0xb4) = 1;
    *(Pair *)(s + 0x80) = data_020b1b28;
    return self;
}
