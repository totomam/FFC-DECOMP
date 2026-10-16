#include "ffc/types.h"
void func_ov006_021b46cc(uint16_t *p, uint16_t *q, uint16_t *o)
{
    uint16_t x = p[0];
    uint16_t y = p[1];
    o[0] = x;
    o[1] = y;
    o[2] = x + q[0];
    o[3] = y + q[1];
}
