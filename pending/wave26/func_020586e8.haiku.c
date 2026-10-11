#include "ffc/types.h"

typedef struct Ctx {
    uint8_t pad[0x40];
    uint32_t val;
} Ctx;

typedef struct Byte {
    uint8_t v;
} Byte;

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b0d50[];

void func_020586e8(Ctx *c, uint32_t a1, uint32_t a2, uint32_t a3, Byte b)
{
    uint8_t *o = (uint8_t *)func_0205681c(0x28);
    if (o != 0) {
        uint32_t f = *(uint32_t *)(o + 0xc) & ~0xffu;
        uint32_t v = c->val;
        uint8_t *q;
        *(uint32_t *)(o + 0xc) = f;
        *(uint32_t *)(o + 0x0) = (uint32_t)data_020b0d50;
        *(uint32_t *)(o + 0x14) = v;
        *(uint32_t *)(o + 0x18) = a1;
        *(uint32_t *)(o + 0x1c) = a2;
        *(uint32_t *)(o + 0x20) = a3;
        q = o + 0x24;
        *q = b.v;
    }
}
