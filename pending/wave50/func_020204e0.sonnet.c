#include "ffc/types.h"
typedef struct { int32_t a, b, c, d; } Q;
extern void func_020209a8(void *p, Q q);
void func_020204e0(uint8_t *self)
{
    Q z;
    volatile Q t;
    volatile Q arr;
    int32_t v2 = *(volatile int32_t *)(self + 0x80);
    int32_t v0 = *(volatile int32_t *)(self + 0x78);
    int32_t v1 = *(volatile int32_t *)(self + 0x7c);
    int32_t v3 = *(volatile int32_t *)(self + 0x84);
    t.a = v0; t.a = v0 + 1;
    t.b = v1; t.b = v1 + 1;
    t.c = v2; t.c = v2 - 1;
    t.d = v3 - 1;
    z.a = 0; z.b = 0; z.c = 1; z.d = 1;
    arr = t;
    func_020209a8(self, z);
}
