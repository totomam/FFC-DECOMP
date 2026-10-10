#include "ffc/types.h"

extern void func_020840d8(void *p, uint32_t *out, uint32_t a, uint32_t b);

uint32_t func_02084130(void *p, uint32_t a, uint32_t b)
{
    uint32_t v = 0xFFFFFFFF;
    func_020840d8(p, &v, a, b);
    return ~v;
}
