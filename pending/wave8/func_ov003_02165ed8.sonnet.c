#include "ffc/types.h"

extern uint8_t data_ov003_0217a98c[];

typedef struct { uint32_t vt; uint32_t p1; uint32_t p2; uint32_t lo:8; uint32_t hi:24; uint32_t f4; uint32_t f5; uint32_t f6; uint32_t f7; uint32_t f8; uint32_t f9; } S;

void func_ov003_02165ed8(S *p, uint32_t x, uint32_t y, uint32_t z, uint32_t w, uint32_t v)
{
    p->f5 = x;
    p->f8 = w;
    p->lo = 0;
    p->vt = (uint32_t)data_ov003_0217a98c;
    p->f6 = y;
    p->f7 = z;
    p->f9 = v;
}
