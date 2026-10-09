#include "ffc/types.h"

extern void func_020532cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_02029824(uint32_t a0, uint8_t *obj, uint32_t a2)
{
    func_020532cc(a0, a2, (uint32_t)obj + *(uint32_t *)(obj + 0x18), *(uint32_t *)(obj + 0x14));
}
