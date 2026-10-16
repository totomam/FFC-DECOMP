#include "ffc/types.h"
extern uint8_t *func_ov006_021a0dd0(uint8_t *p);
int func_ov006_021a0e30(uint8_t *p)
{
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0;
    int n = func_ov006_021a0dd0(p + 8) - p;
    *(uint16_t *)p = (uint16_t)(n - 8);
    return n;
}
