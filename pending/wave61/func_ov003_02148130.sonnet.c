#include "ffc/types.h"
extern uint32_t func_02081210(uint32_t a, uint32_t b);
void func_ov003_02148130(uint32_t *out, uint32_t *in, ...) {
    uint32_t *ap = (uint32_t*)&in + 2;
    uint32_t *i = in;
    uint32_t r = func_02081210(i[1], *ap);
    out[0] = func_02081210(i[0], *ap);
    out[1] = r;
}
