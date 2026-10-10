#include "ffc/types.h"

extern void func_020095b8(void *dst, uint32_t val);

void *func_0200b34c(uint32_t *self, uint32_t a, uint32_t b)
{
    *self = a;
    func_020095b8((uint8_t *)self + 4, b);
    return self;
}
