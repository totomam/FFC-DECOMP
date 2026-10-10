#include "ffc/types.h"

extern void func_0205cbcc(uint32_t a, uint16_t b);

void func_0205ce10(uint8_t *p)
{
    func_0205cbcc(*(uint32_t *)(p + 0x14), *(uint16_t *)(p + 0x18));
}
