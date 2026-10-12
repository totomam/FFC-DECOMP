#include "ffc/types.h"

extern void func_020694ac(void *a, void *b, uint32_t c);
extern uint32_t data_ov011_021cb7e0[];

void *func_ov011_021c5fdc(void *self, void *a, void *b, uint8_t c)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, b, 0);
    *(uint32_t *)p = (uint32_t)data_ov011_021cb7e0;
    *(uint32_t *)(p + 0xb8) = (uint32_t)a;
    *(uint32_t *)(p + 0xbc) = 0;
    *(uint32_t *)(p + 0xc0) = (uint32_t)b;
    *(uint32_t *)(p + 0xc8) = 0;
    *(p + 0xd8) = c;
    *(uint32_t *)(p + 0xdc) = 0;
    *(uint32_t *)(p + 0xe0) = 0;
    *(uint8_t *)(p + 0xe4) = 1;
    *(uint8_t *)(p + 0xe5) = 1;
    return self;
}
