#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov001_02171e6c(uint32_t p0, uint32_t p1, uint32_t p2)
{
    uint8_t *s = (uint8_t *)p0;
    fn_t f = *(fn_t *)(s + 0x44);
    if (f != 0) {
        uint32_t a = *(uint32_t *)(s + 0x128);
        uint32_t b = *(uint32_t *)(s + 0x12c);
        uint32_t c = *(uint32_t *)(s + 0x4c);
        f(*(uint32_t *)(s + 4), *(uint32_t *)(s + 0x10), p1, p2, a, b, c);
    }
}
