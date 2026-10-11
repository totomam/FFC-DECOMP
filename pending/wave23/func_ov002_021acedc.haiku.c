#include "ffc/types.h"

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);
extern uint32_t func_02081210(uint32_t a, uint32_t b);

void func_ov002_021acedc(uint32_t *out, uint8_t *obj)
{
    *out = 1 << 12;
    if (func_ov002_021aa11c(obj + 0x190, 12)) {
        uint32_t v = *(uint32_t *)(obj + 0x190 + 0xac);
        *out = func_02081210(v << 12, 10 << 12);
    }
}
