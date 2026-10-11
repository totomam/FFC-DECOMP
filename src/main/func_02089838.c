#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, uint32_t b, int32_t c, int32_t d);

int32_t func_02089838(uint32_t x, int32_t p1, int32_t p2, int32_t p3) {
    int32_t r;
    r = func_02089218(5, (x << 8) & 0x7f00, 0, p3);
    if (r >= 0) {
        return 1;
    }
    return 0;
}
