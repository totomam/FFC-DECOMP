#include "ffc/types.h"

extern void func_020878e8(uint32_t a, uint32_t b);
extern void func_02087874(uint32_t a, uint32_t b);
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);

void func_0207eba8(uint32_t *p)
{
    uint32_t a = p[1];
    uint32_t b = p[2];
    uint32_t c = p[3];
    uint32_t d = b + c;
    func_020878e8(a, d);
    func_02087874(a, d);
    func_02084b2c(a + b, 0, d - b);
}
