#include "ffc/types.h"

extern void func_ov001_0217ec78(void *obj, uint32_t b, uint32_t c);

void func_ov001_0217ef50(void **p, uint32_t x, uint32_t y)
{
    uint8_t *o = (uint8_t *)*p;
    func_ov001_0217ec78(o, y, 0x100);
    *(uint32_t *)(o + 0x5b8) = x;
}
