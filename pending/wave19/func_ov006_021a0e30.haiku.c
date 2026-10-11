#include "ffc/types.h"

extern void *func_ov006_021a0dd0(void *p);

void func_ov006_021a0e30(uint8_t *p)
{
    int v;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    v = (int)func_ov006_021a0dd0(p + 8) - (int)p;
    *(uint16_t *)p = (uint16_t)(v - 8);
}
