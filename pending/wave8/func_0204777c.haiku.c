#include "ffc/types.h"

extern void func_02042b18(uint32_t a, uint32_t b);

void func_0204777c(uint8_t *p)
{
    func_02042b18(*(uint32_t *)(p + 0x80), 1);
}
