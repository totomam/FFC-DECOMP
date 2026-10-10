#include "ffc/types.h"

extern void func_02084080(void *a, uint16_t *out, uint32_t b, uint32_t c);

uint16_t func_02084118(void *a, uint32_t b, uint32_t c)
{
    uint16_t out = 0;
    func_02084080(a, &out, b, c);
    return out;
}
