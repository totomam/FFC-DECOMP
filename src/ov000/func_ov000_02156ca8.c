#include "ffc/types.h"

typedef uint32_t (*fn_t)(uint32_t, uint32_t);

uint32_t func_ov000_02156ca8(uint8_t *base, uint32_t *out, uint32_t n) {
    fn_t f = *(fn_t *)(base + 0x1010);
    uint32_t r;
    if (n == 0) {
        return 0;
    }
    r = f(0, n);
    out[0] = r;
    if (r == 0) {
        return 0;
    }
    out[1] = r;
    out[2] = r + n;
    out[3] = n;
    return 1;
}
