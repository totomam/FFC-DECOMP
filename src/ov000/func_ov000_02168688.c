#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint32_t func_0209a6d4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_ov000_02168688(uint32_t *out) {
    uint64_t s = func_020882cc() << 6;
    uint32_t r = func_0209a6d4((uint32_t)s, (uint32_t)(s >> 32), 0x1ff6210, 0);
    if (out != 0) {
        *out = r;
    }
    return r;
}
