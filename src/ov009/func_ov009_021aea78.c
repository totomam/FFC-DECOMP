#include "ffc/types.h"

extern void *data_0213df18;
extern void func_02069528(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern char data_ov009_021b0fe0[];

void *func_ov009_021aea78(void *self, uint32_t p1, uint8_t p2, uint32_t p3)
{
    uint8_t *s = (uint8_t *)self;
    func_02069528(self, *(uint32_t *)((uint8_t *)data_0213df18 + 0x20), 0, 0);
    *(void **)s = data_ov009_021b0fe0;
    *(uint32_t *)(s + 0xbc) = 0;
    *(uint32_t *)(s + 0xec) = p1;
    *(uint8_t *)(s + 0xf0) = p2;
    *(uint32_t *)(s + 0xf4) = p3;
    return self;
}
