#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern uint8_t func_ov000_02158790(void *p);
extern void func_ov006_021b0414(uint8_t v);

void func_ov006_021b00bc(void)
{
    uint8_t *p = data_ov006_021bc7e4;
    uint8_t *src = p + 0x400;
    uint8_t *dst = p + (src[0xf4] << 8);
    uint16_t *s = (uint16_t *)src;
    uint16_t *d = (uint16_t *)dst;
    uint32_t i = 0x78;

    do {
        *d++ = *s++;
    } while (--i != 0);

    if (src[0xf5] != 0) {
        func_02084b2c(dst + 0xc0, 0, 4);
        func_02084b2c(dst + 0xc4, 0, 4);
        dst[0xd0] = 0;
    } else {
        func_02084ca4(src + 0xc0, dst + 0xc0, 4);
        func_02084ca4(src + 0xc4, dst + 0xc4, 4);
        dst[0xd0] = func_ov000_02158790(src + 0xf0);
    }

    if (src[0xf6] != 0) {
        func_02084b2c(dst + 0xc8, 0, 8);
    } else {
        func_02084ca4(src + 0xc8, dst + 0xc8, 8);
    }

    func_ov006_021b0414(src[0xf4]);
}
