#include "ffc/types.h"

extern void func_021bf751(uint32_t a, uint32_t b, uint8_t c);

void func_02074504(uint8_t *p)
{
    func_021bf751(*(uint32_t *)(p + 0x24), *(uint32_t *)(p + 0x28), *(uint8_t *)(p + 0x2c));
}
