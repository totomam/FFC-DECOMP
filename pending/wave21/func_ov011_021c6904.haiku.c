#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov011_021cb9e4[];

void *func_ov011_021c6904(void *self, uint32_t a, uint32_t b)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, b, 0);
    *(uint8_t **)p = data_ov011_021cb9e4;
    *(uint32_t *)(p + 0xb8) = a;
    *(uint32_t *)(p + 0xbc) = b;
    *(uint32_t *)(p + 0xc8) = 0;
    return self;
}
