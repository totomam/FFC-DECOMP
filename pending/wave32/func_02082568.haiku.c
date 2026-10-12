#include "ffc/types.h"

extern uint32_t data_020b2948;
extern int32_t func_021d9ad8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern int32_t func_020844ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern int32_t func_020849f4(uint32_t a, uint32_t b, uint32_t c);

int32_t func_02082568(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t g = data_020b2948;
    if (g != 0xFFFFFFFFu && c > 0x30) {
        if (g > 3) {
            return func_021d9ad8(g - 4, a, b + 0x7000400, c);
        }
        return func_020844ec(g, a, b + 0x7000400, c, 1);
    }
    return func_020849f4(a, b + 0x7000400, c);
}
