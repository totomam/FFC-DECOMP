#include "ffc/types.h"

typedef struct { uint32_t a; uint16_t b; } S;
extern uint64_t func_0209a978(uint32_t x, uint32_t y);

uint32_t func_ov001_02181c00(S **p, uint32_t n)
{
    S *q = *p;
    return func_0209a978(q->a * q->b, n) >> 32;
}
