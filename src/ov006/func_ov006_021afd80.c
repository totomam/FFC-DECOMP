#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern int func_ov006_021b5404(uint8_t *p, int n);
extern int func_ov006_021b0548(uint8_t c);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_ov006_021afd80(uint8_t *p)
{
    int i;
    int r5;
    int hi;
    int f;
    uint8_t *dst;

    func_02084b2c(data_ov006_021bc7e4 + 0x480, 0, 0x10);
    r5 = func_ov006_021b5404(p, 0x20);

    switch (r5) {
    case 0:
    case 10:
    case 26:
    case 32:
        f = data_ov006_021bc7e4[0x4e6];
        f &= ~0xfc;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        dst = data_ov006_021bc7e4 + 0x480;
        for (i = 0; i < r5; i += 2) {
            hi = func_ov006_021b0548(p[i]);
            *dst++ = (uint8_t)((hi << 4) + func_ov006_021b0548(p[i + 1]));
        }
        break;
    default:
        f = data_ov006_021bc7e4[0x4e6];
        f = (f & ~0xfc) | 4;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        func_02084ca4(p, data_ov006_021bc7e4 + 0x480, 0x10);
        break;
    }

    switch (r5) {
    case 0:
        f = data_ov006_021bc7e4[0x4e6];
        f &= ~3;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        return;
    case 5:
    case 10:
        f = data_ov006_021bc7e4[0x4e6];
        f = (f & ~3) | 1;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        return;
    case 13:
    case 26:
        f = data_ov006_021bc7e4[0x4e6];
        f = (f & ~3) | 2;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        return;
    default:
        f = data_ov006_021bc7e4[0x4e6];
        f = (f & ~3) | 3;
        data_ov006_021bc7e4[0x4e6] = (uint8_t)f;
        return;
    }
}
