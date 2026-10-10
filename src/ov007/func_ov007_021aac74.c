#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c4dd8[];

void *func_ov007_021aac74(void *self, uint32_t a, uint32_t b)
{
    func_020694ac(self, 0, 0);
    *(void **)self = data_ov007_021c4dd8;
    *(uint32_t *)((uint8_t *)self + 0xb8) = a;
    *(uint32_t *)((uint8_t *)self + 0xbc) = b;
    return self;
}
