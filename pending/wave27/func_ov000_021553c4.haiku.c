#include "ffc/types.h"

extern uint32_t func_ov000_02154e4c(uint32_t x);
extern uint32_t func_ov000_02154e00(uint32_t x);
extern int32_t func_ov000_0215502c(uint32_t a, uint32_t b, uint32_t c);
extern int32_t func_ov000_02154e10(uint32_t x);

int32_t func_ov000_021553c4(uint32_t *a, uint32_t b)
{
    uint32_t c = b;
    uint32_t r = func_ov000_02154e4c(c);
    switch (r) {
    case 2:
        return func_ov000_0215502c(func_ov000_02154e00(c), b, a[0x24 / 4]);
    case 3:
        return func_ov000_02154e10(c);
    case 1:
        return -1;
    default:
        return 0;
    }
}
