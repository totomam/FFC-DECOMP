#include "ffc/types.h"

extern void func_ov002_021c8e44(void *p);
extern uint8_t data_020ab858[];

uint8_t *func_ov002_021b0884(uint8_t *d, const uint8_t *s)
{
    volatile uint32_t *dw = (volatile uint32_t *)d;
    volatile const uint32_t *sw = (volatile const uint32_t *)s;
    dw[2] = 0;
    dw[3] = 0x10101;
    dw[0] = (uint32_t)data_020ab858;
    func_ov002_021c8e44(d + 0x10);
    dw[4] = sw[0];
    dw[5] = sw[1];
    dw[6] = sw[2];
    dw[7] = sw[3];
    dw[8] = sw[4];
    { volatile uint8_t *p = d + 0x24; *p = *(volatile const uint8_t *)(s + 0x14); }
    dw[10] = sw[6];
    { volatile uint8_t *p = d + 0x2c; *p = *(volatile const uint8_t *)(s + 0x1c); }
    dw[12] = sw[8];
    dw[13] = sw[9];
    { volatile uint8_t *p = d + 0x38; *p = *(volatile const uint8_t *)(s + 0x28); }
    { volatile uint8_t *p = d + 0x39; *p = *(volatile const uint8_t *)(s + 0x29); }
    dw[15] = sw[11];
    dw[16] = sw[12];
    { volatile uint8_t *p = d + 0x44; *p = *(volatile const uint8_t *)(s + 0x34); }
    dw[18] = sw[14];
    dw[19] = sw[15];
    dw[20] = sw[16];
    dw[21] = sw[17];
    dw[22] = sw[18];
    dw[23] = sw[19];
    { volatile uint8_t *p = d + 0x60; *p = *(volatile const uint8_t *)(s + 0x50); }
    { volatile uint8_t *p = d + 0x61; *p = *(volatile const uint8_t *)(s + 0x51); }
    dw[25] = sw[21];
    dw[26] = sw[22];
    return d;
}
