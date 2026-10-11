#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);

void func_0201f788(uint8_t *p)
{
    func_02084b2c(*(void **)(p + 0x90), 0, 0xf00);
    func_02084b2c(*(void **)(p + 0x94), 0, 0x3c);
}
