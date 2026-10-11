#include "ffc/types.h"

extern uint16_t data_02141390[];

void func_020836ec(void)
{
    uint16_t *p = data_02141390;
    volatile uint32_t *r32 = (volatile uint32_t *)0x04000240;
    volatile uint8_t *r8 = (volatile uint8_t *)0x04000240;
    volatile uint16_t *r16 = (volatile uint16_t *)0x04000240;

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;
    *r32 = 0;
    r8[4] = 0;
    r8[5] = 0;
    r8[6] = 0;
    r16[4] = 0;
}
