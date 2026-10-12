#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void func_0206660c(void *obj, void *self, uint32_t vt, Pair p, uint32_t a3, uint32_t a4);
extern char data_020aeacc[];

void *func_0203ba18(void *self, Pair p, uint32_t a3, uint32_t a4)
{
    uint8_t *p0;
    uint8_t *inner;

    p0 = (uint8_t *)func_0205681c(0x50);
    if (p0 != 0) {
        inner = *(uint8_t **)((uint8_t *)self + 0x18);
        func_0206660c(p0, self, *(uint32_t *)(inner + 0x14), p, a3, a4);
        *(char **)p0 = data_020aeacc;
    }
    return p0;
}
