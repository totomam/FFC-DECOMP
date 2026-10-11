#include "ffc/types.h"

extern uint32_t func_0209a978(int32_t a, int32_t b);
extern int32_t func_ov003_0215abac(int32_t a, uint16_t b);

int32_t func_ov003_0215ba9c(int32_t *s, int32_t x) {
    int32_t n = s[7] - 1;
    uint32_t r = func_0209a978((n - x) * s[14] + s[15] * x, n);
    return func_ov003_0215abac(s[13], (uint16_t)r);
}
