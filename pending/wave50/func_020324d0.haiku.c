#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern void func_020095b8(void *p, uint32_t x);
extern uint8_t data_020ae0f8[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void *func_020324d0(void *self, Pair p, uint32_t c, uint32_t d, uint32_t e, uint8_t f)
{
    uint8_t *s = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(void **)s = data_020ae0f8;
    *(uint32_t *)(s + 0x88) = p.a;
    *(uint32_t *)(s + 0x8c) = p.b;
    func_020095b8(s + 0x90, c);
    *(uint32_t *)(s + 0x9c) = d;
    *(int32_t *)(s + 0xa0) = -1;
    *(uint8_t *)(s + 0xa4) = 0;
    *(uint32_t *)(s + 0xa8) = e;
    *(uint32_t *)(s + 0xb0) = 0;
    *(uint8_t *)(s + 0xb4) = f;
    *(uint32_t *)(s + 0xb8) = 0;
    return self;
}
