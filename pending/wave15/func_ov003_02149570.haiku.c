#include "ffc/types.h"

extern uint32_t func_020816d4(uint32_t a, uint32_t b);

typedef struct { uint32_t a; uint32_t b; } S;

uint32_t func_ov003_02149570(uint32_t x, S s)
{
    S t;
    S *p = &s;
    t = *p;
    return func_020816d4(t.b, t.a);
}
