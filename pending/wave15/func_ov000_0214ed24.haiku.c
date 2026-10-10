#include "ffc/types.h"

extern void func_ov000_0214d600(void *a, uint16_t v);

void func_ov000_0214ed24(void *a, const uint16_t *b)
{
    int32_t v = b[1];
    uint32_t hi = (uint8_t)(v >> 8);
    uint32_t s = (hi | ((v << 8) & 0xff00));
    func_ov000_0214d600(a, (uint16_t)s);
}
