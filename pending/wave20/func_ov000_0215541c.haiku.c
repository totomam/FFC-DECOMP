#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_02154e30(void *p, uint32_t a, uint32_t b);
extern void func_ov000_02154ee8(void *p, uint32_t v);

void func_ov000_0215541c(void *p, uint32_t a, uint32_t b)
{
    func_02084b2c(p, 0, 12);
    func_ov000_02154e30(p, a, b);
    func_ov000_02154ee8(p, 2);
}
