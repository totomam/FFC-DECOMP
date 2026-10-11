#include "ffc/types.h"

extern uint8_t data_020b8df0[];
extern int32_t func_02015e50(int32_t x, int32_t a, int32_t b, int32_t c, int32_t d);

int32_t func_02015e30(int32_t p0, int32_t p1, int32_t p2, int32_t p3) {
    int32_t r = 1;
    if (func_02015e50(*(int32_t *)(data_020b8df0 + 0x54), p1, p2, p3, r) != 2) {
        r = 0;
    }
    return r;
}
