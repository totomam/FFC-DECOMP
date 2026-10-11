#include "ffc/types.h"
extern uint8_t *func_ov006_021a0dd0(uint8_t *p);
void func_ov006_021a0e30(uint8_t *p)
{
    uint8_t *e;
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0; p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0;
    e = func_ov006_021a0dd0(p + 8);
    *(uint16_t*)p = (e - (p+8));
}
