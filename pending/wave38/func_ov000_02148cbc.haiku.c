#include "ffc/types.h"

extern int func_ov000_02148c18(void *a, uint32_t b, void *c);
extern int func_ov000_02148da4(void *c, uint32_t *x, uint32_t *y);
extern void func_02087874(void *a);
extern int func_ov000_02148e2c(uint32_t p, uint16_t n, void *a);

int func_ov000_02148cbc(void *a, uint32_t b, void *c)
{
    uint32_t x;
    uint32_t y;
    int r;

    r = func_ov000_02148c18(a, b, c);
    if (r != 0) {
        return r;
    }
    if (a == 0) {
        return -1;
    }
    if (func_ov000_02148da4(c, &x, &y) == 0) {
        return -1;
    }
    if (y > b) {
        y = b;
    }
    func_02087874(a);
    if (func_ov000_02148e2c(x, (uint16_t)y, a) == 0) {
        return (int)y;
    }
    return -1;
}
