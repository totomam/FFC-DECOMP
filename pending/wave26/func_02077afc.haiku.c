#include "ffc/types.h"

extern void func_02077aa4(void *self, void *b);
extern void func_02077ad0(void *self, void *b);

void func_02077afc(void *self, void *a, void *b)
{
    uint8_t *s = (uint8_t *)self;
    if (a == 0) {
        func_02077aa4(self, b);
        return;
    }
    if ((uint32_t)a == *(uint32_t *)s) {
        func_02077ad0(self, b);
        return;
    }
    {
        uint32_t off = *(uint16_t *)(s + 0xa);
        uint8_t *p = (uint8_t *)b + off;
        uint32_t t = *(uint32_t *)((uint8_t *)a + off);
        *(uint32_t *)(p) = t;
        *(uint32_t *)(p + 4) = (uint32_t)a;
        *(uint32_t *)((uint8_t *)(t + off) + 4) = (uint32_t)b;
        *(uint32_t *)((uint8_t *)a + *(uint16_t *)(s + 0xa)) = (uint32_t)b;
        *(uint16_t *)(s + 8) = (uint16_t)(*(uint16_t *)(s + 8) + 1);
    }
}
