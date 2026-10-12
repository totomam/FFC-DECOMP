#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov006_021b00bc(void);

typedef struct { volatile uint8_t b[0x400]; } Blk;
extern Blk *data_ov006_021bc7e4;

void func_ov006_021b016c(uint8_t *p)
{
    Blk *base = data_ov006_021bc7e4;
    uint32_t r7 = 0;
    int i;
    int32_t mode;
    uint8_t *volatile q;

    func_02084b2c(&base[1], 0, 0xef);
    func_02084ca4(p, &base[1].b[0x40], 0x20);

    mode = *(int32_t *)(p + 0x20);
    switch (mode) {
    case 1:
        base[1].b[0xe6] = (base[1].b[0xe6] & ~3) | 1;
        r7 = 5;
        break;
    case 2:
        base[1].b[0xe6] = (base[1].b[0xe6] & ~3) | 2;
        r7 = 0xd;
        break;
    case 3:
        base[1].b[0xe6] = (base[1].b[0xe6] & ~3) | 3;
        r7 = 0x10;
        break;
    default:
        base[1].b[0xe6] = base[1].b[0xe6] & ~3;
        break;
    }

    base[1].b[0xe6] = base[1].b[0xe6] & ~0xfc;

    q = (uint8_t *)&base[1];
    q = q + 0x80;
    for (i = 0; i < 4; i++) {
        func_02084ca4(p + 0x28 + i * 0x20, q + i * 0x10, r7);
    }

    base[1].b[0xe7] = 2;
    func_02084b2c(&base[1].b[0xf0], 0, 4);
    base[1].b[0xf5] = 1;
    base[1].b[0xf6] = 1;
    func_ov006_021b00bc();
}
