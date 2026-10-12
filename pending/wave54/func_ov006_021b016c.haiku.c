#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov006_021b00bc(void);
extern uint8_t *data_ov006_021bc7e4;

typedef struct {
    uint8_t lo[0x400];
    uint8_t hi[0x400];
} Ctx;

void func_ov006_021b016c(uint8_t *p)
{
    Ctx *c = (Ctx *)data_ov006_021bc7e4;
    uint32_t r7 = 0;
    int i;
    int32_t mode;

    func_02084b2c(&c->hi[0], 0, 0xef);
    func_02084ca4(p, &c->hi[0x40], 0x20);

    mode = *(int32_t *)(p + 0x20);
    if (mode == 1) {
        c->hi[0xe6] = (c->hi[0xe6] & ~3) | 1;
        r7 = 5;
    } else if (mode == 2) {
        c->lo[0x2e6] = (c->lo[0x2e6] & ~3) | 2;
        r7 = 0xd;
    } else if (mode == 3) {
        c->hi[0xe6] = (c->hi[0xe6] & ~3) | 3;
        r7 = 0x10;
    } else {
        c->hi[0xe6] = c->hi[0xe6] & ~3;
    }

    c->hi[0xe6] = c->hi[0xe6] & ~0xfc;

    for (i = 0; i < 4; i++) {
        func_02084ca4(p + 0x28 + i * 0x20, &c->hi[0x80 + i * 0x10], r7);
    }

    c->lo[0x2e7] = 2;
    func_02084b2c(&c->lo[0x2f0], 0, 4);
    c->hi[0xf5] = 1;
    c->hi[0xf6] = 1;
    func_ov006_021b00bc();
}
