#include "ffc/types.h"

void func_ov006_021b46cc(uint16_t *a, uint16_t *b, uint16_t *out)
{
    uint16_t a0 = a[0];
    uint16_t a1 = a[1];
    out[0] = a0;
    out[1] = a1;
    out[2] = (uint16_t)(a0 + b[0]);
    out[3] = (uint16_t)(a1 + b[1]);
}
