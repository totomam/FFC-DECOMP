#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct Ctx {
    uint8_t *base;
    void *r4;
    uint32_t *cnt;
} Ctx;

void *func_0202d48c(void *a0)
{
    volatile uint32_t buf[2];
    Ctx *c = (Ctx *)a0;
    (void)buf;
    void *r4 = c->r4;

    func_0208763c(r4);
    c->cnt[0] = c->cnt[0] - 1;
    if (*c->cnt == 0) {
        ((uint32_t *)(c->base + 0x48))[3] &= ~0xffu;
        ((uint32_t *)(((Ctx *)a0)->base + 0x14))[3] &= ~0xffu;
    }
    func_02087678(r4);
    return a0;
}
