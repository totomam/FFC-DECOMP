#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov006_021b00bc(void);
extern uint8_t *data_ov006_021bc7e4;

void func_ov006_021b028c(uint8_t *a)
{
    uint8_t *b = data_ov006_021bc7e4 + 0x400;
    uint8_t v;

    func_02084b2c(b, 0, 0xef);
    func_02084ca4(a, b + 0xd1, 5);
    func_02084ca4(a + 6, b + 0xd6, 5);
    func_02084ca4(a + 0xc, b + 0xdb, 5);
    func_02084ca4(a + 0x12, b + 0xe0, 5);
    func_02084ca4(a + 0x18, b + 0x60, 0x20);
    func_02084ca4(a + 0x39, b + 0x80, 0xd);
    func_02084ca4(a + 0x47, b + 0x90, 0xd);
    func_02084ca4(a + 0x55, b + 0xa0, 0xd);
    func_02084ca4(a + 0x63, b + 0xb0, 0xd);
    func_02084ca4(a + 0x71, b + 0x40, 0x20);

    v = b[0xe6];
    v = (uint8_t)((v & ~3) | 2);
    b[0xe6] = v;
    v = b[0xe6];
    v = (uint8_t)(v & ~0xfc);
    b[0xe6] = v;
    b[0xe7] = 1;
    func_02084b2c(b + 0xf0, 0, 4);
    b[0xf5] = 1;
    b[0xf6] = 1;
    func_ov006_021b00bc();
}
