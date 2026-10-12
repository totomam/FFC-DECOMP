#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02059c0c(void *p);
extern void func_02058048(void *p, uint32_t a, uint32_t b);
extern void func_02087678(void *p);

void func_02059698(uint32_t *self, uint32_t *obj)
{
    struct { uint32_t v; volatile uint8_t f; } g;
    uint32_t i;
    uint32_t *inner;

    g.v = self[4] + 0x20;
    g.f = 1;
    if (g.f != 0) {
        func_0208763c((void *)g.v);
    }

    inner = (uint32_t *)self[2];
    i = 0;
    for (; i < inner[5]; i++) {
        uint32_t *slot = (uint32_t *)((uint8_t *)self + (inner[4] << 2) + (i << 2) + 0x14);
        if (*slot == (uint32_t)obj) {
            break;
        }
    }

    func_02059c0c(obj);
    func_02058048((void *)self[4], obj[1], 0);

    inner = (uint32_t *)self[2];
    *(uint32_t *)((uint8_t *)self + ((i + inner[4]) << 2) + 0x14) = 0;

    if (obj != 0) {
        (*(void (***)(void *))obj)[1](obj);
    }

    if (g.f != 0) {
        func_02087678((void *)g.v);
    }
}
