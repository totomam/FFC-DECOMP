#include "ffc/types.h"

extern void func_ov004_0214ecac(uint32_t a, uint32_t b, uint32_t *x, uint32_t *y);

void func_ov004_0214ecec(uint32_t *out, uint32_t a, uint32_t b, uint32_t x, uint32_t y) {
    func_ov004_0214ecac(a, b, &x, &y);
    out[0] = x;
    out[1] = y;
}
