#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02084e04(const void *src, void *dst, uint32_t n);
extern uint8_t data_ov000_0216bc60[];
extern uint8_t data_ov000_0216bcc8[];
extern uint8_t data_ov000_021697f4[];

uint8_t *func_ov000_021482f8(uint8_t *p, int a1)
{
    uint16_t v;
    uint32_t k = 6;
    uint8_t *q;

    func_02084b2c(p, 0, 0xec);
    *(uint16_t *)(p + 0) = 0x101;
    p[2] = k;
    v = (uint16_t)(*(uint32_t *)(data_ov000_0216bc60 + 0x30) >> 16);
    *(uint16_t *)(p + 4) = (uint16_t)((v >> 8) | (v << 8));
    v = (uint16_t)*(uint32_t *)(data_ov000_0216bc60 + 0x30);
    *(uint16_t *)(p + 6) = (uint16_t)((v >> 8) | (v << 8));
    v = (uint16_t)(*(uint32_t *)(data_ov000_0216bc60 + 0x50) >> 16);
    *(uint16_t *)(p + 0xc) = (uint16_t)((v >> 8) | (v << 8));
    v = (uint16_t)*(uint32_t *)(data_ov000_0216bc60 + 0x50);
    *(uint16_t *)(p + 0xe) = (uint16_t)((v >> 8) | (v << 8));
    func_02084e04(data_ov000_0216bcc8, p + 0x1c, 6);
    *(uint16_t *)(p + 0xec) = 0x8263;
    *(uint16_t *)(p + 0xee) = 0x6353;
    *(uint16_t *)(p + 0xf0) = 0xec + 0x49;
    p[0xf2] = (uint8_t)a1;
    p[0xf3] = 0x3d;
    p[0xf4] = 7;
    p[0xf5] = 1;
    func_02084e04(data_ov000_0216bcc8, p + 0xf6, 6);
    p += 0xfc;
    if (a1 != 7) {
        p[0] = 0xc;
        p[1] = 0xa;
        func_02084e04(data_ov000_021697f4, p + 2, 0xa);
        p[0xc] = 0x37;
        p[0xd] = 3;
        p[0xf] = 3;
        q = p;
        p[0xe] = 1;
        q[0x10] = k;
        p += 0x11;
    }
    return p;
}
