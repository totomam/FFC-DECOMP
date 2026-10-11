#include "ffc/types.h"

extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern void func_ov003_02147684(uint32_t a, uint32_t *out, uint32_t b, uint32_t c, uint32_t d);

void func_ov003_0214818c(uint32_t *out, uint32_t b, uint64_t x, uint32_t e, uint32_t f)
{
    uint32_t r;

    r = func_0209af28(0xfa << 22, e);
    func_ov003_02147684(b, (uint32_t *)&x, e, r, f);
    out[0] = (uint32_t)x;
    out[1] = (uint32_t)(x >> 32);
}
