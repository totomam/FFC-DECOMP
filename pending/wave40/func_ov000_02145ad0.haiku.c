#include "ffc/types.h"

extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_02084e04(void *d, const void *s, uint32_t n);
extern void func_ov000_02145834(void *p, uint32_t n, int v);
extern uint8_t data_ov000_0216bcc8[];
extern uint8_t data_ov000_0216bc60[];

void func_ov000_02145ad0(uint32_t a)
{
    uint8_t buf[0x2c];
    uint8_t *src;
    uint32_t v;
    uint32_t z;
    uint16_t lo;

    src = data_ov000_0216bcc8;
    func_02084b2c(buf, 0, 0x2a);
    func_02084b2c(buf, 0xff, 6);
    func_02084e04(src, buf + 6, 6);

    *(uint16_t *)(buf + 0xc) = 0x608;
    buf[0xf] = 1;
    buf[0x10] = 8;
    *(uint16_t *)(buf + 0x12) = 0x406;
    buf[0x15] = 1;

    func_02084e04(src, buf + 0x16, 6);

    z = 0;
    v = *(uint32_t *)(data_ov000_0216bc60 + 0x50);
    lo = (uint16_t)(v >> 16);
    *(uint16_t *)(buf + 0x1c) = (uint16_t)((lo >> 8) | (lo << 8));
    lo = (uint16_t)v;
    *(uint16_t *)(buf + 0x1e) = (uint16_t)((lo >> 8) | (lo << 8));
    lo = (uint16_t)(a >> 16);
    *(uint16_t *)(buf + 0x26) = (uint16_t)((lo >> 8) | (lo << 8));
    lo = (uint16_t)a;
    *(uint16_t *)(buf + 0x28) = (uint16_t)((lo >> 8) | (lo << 8));

    func_ov000_02145834(buf, 0x2a, 0);
}
