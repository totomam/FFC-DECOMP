#include "ffc/types.h"

extern uint8_t data_ov000_0216c182[];
extern uint8_t data_ov000_0216bc60[];
extern uint8_t *func_ov000_021482f8(uint8_t *base, int n);
extern uint8_t *func_ov000_021483e0(int a, int b, uint8_t *p, int len);
extern void func_ov000_02147e28(uint8_t *base, int len);

uint32_t func_ov000_02148484(int a)
{
    uint8_t *base = data_ov000_0216c182;
    uint8_t *p = func_ov000_021482f8(base, 3);

    if (a == 0) {
        uint8_t four = 4;
        uint32_t *g;
        p[0] = 0x32;
        p[1] = four;
        g = (uint32_t *)data_ov000_0216bc60;
        p[2] = (uint16_t)(g[14] >> 16) >> 8;
        p[3] = g[14] >> 16;
        p[4] = (uint16_t)g[14] >> 8;
        p[5] = g[14];
        p[6] = 0x36;
        p[7] = four;
        p[8] = (uint16_t)(g[7] >> 16) >> 8;
        p[9] = g[7] >> 16;
        p[10] = (uint16_t)g[7] >> 8;
        p[11] = g[7];
        p += 12;
    }
    p[0] = 0xff;
    p++;
    {
        uint8_t *q = func_ov000_021483e0(0, 0xff + 0x2d, p, (int)(p - base));
        func_ov000_02147e28(base, (int)(q - base));
    }
    return ((uint32_t *)data_ov000_0216bc60)[12];
}
