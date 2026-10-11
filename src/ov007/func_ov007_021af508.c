#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c5914[];

void *func_ov007_021af508(void *self, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, 0, 0);
    *(void **)p = data_ov007_021c5914;
    *(uint32_t *)(p + 0xb8) = a1;
    *(uint32_t *)(p + 0xd4) = a2;
    *(uint32_t *)(p + 0xd8) = a3;
    *(uint8_t *)(p + 0xe0) = 1;
    return self;
}
