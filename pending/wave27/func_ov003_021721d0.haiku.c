#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov003_0217b67c[];
extern Pair data_ov003_0217b6a4;

uint32_t *func_ov003_021721d0(uint32_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *q;

    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov003_0217b67c;
    q = (uint8_t *)p;
    *(uint32_t *)(q + 0x88) = a;
    *(uint32_t *)(q + 0x8c) = b;
    *(uint32_t *)(q + 0x90) = 0;
    *(uint8_t *)(q + 0x94) = 1;
    *(uint32_t *)(q + 0x98) = c;
    *(Pair *)(q + 0x80) = data_ov003_0217b6a4;
    return p;
}
