#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint8_t *func_ov000_021482f8(uint8_t *p, int n);
extern int func_ov000_021483e0(int a, int b, uint8_t *p, int len);
extern void func_ov000_02147e28(uint8_t *p, int n);
extern uint8_t data_ov000_0216bce0[];
extern uint8_t data_ov000_0216bc60[];
extern uint8_t data_ov000_0216c182[];

uint32_t func_ov000_021483fc(void)
{
    uint64_t *s = (uint64_t *)data_ov000_0216bce0;
    uint64_t *g = (uint64_t *)data_ov000_0216bc60;
    uint32_t *w = (uint32_t *)data_ov000_0216bc60;
    uint8_t *base = data_ov000_0216c182;
    uint8_t *buf;
    uint64_t sum;
    int n;

    sum = s[1] + func_0209a71c(s[0], g[15]);
    g[15] = sum;
    w[12] = (uint32_t)(sum >> 32);

    buf = func_ov000_021482f8(data_ov000_0216c182, 1);
    if (w[14] != 0) {
        buf[0] = 0x32;
        buf[1] = 4;
        buf[2] = (uint8_t)((uint16_t)(w[14] >> 16) >> 8);
        buf[3] = (uint8_t)(w[14] >> 16);
        buf[4] = (uint8_t)((uint16_t)w[14] >> 8);
        buf[5] = (uint8_t)w[14];
        buf += 6;
    }
    *buf = 0xff;
    buf++;
    n = func_ov000_021483e0(0, 0x12c, buf, (int)(buf - base));
    func_ov000_02147e28(base, n - (int)base);
    return ((uint32_t *)data_ov000_0216bc60)[12];
}
