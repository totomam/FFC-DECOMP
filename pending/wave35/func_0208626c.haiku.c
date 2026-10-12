#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, uint32_t b, int32_t c);

int32_t func_0208626c(uint32_t a) {
    int32_t r;
    int32_t ok = 0;
    r = func_02089218(4, 0x2002200 | (a >> 24), ok);
    if (r < 0) {
        return ok;
    }
    r = func_02089218(4, (4 << 14) | ((a << 8) >> 16), ok);
    if (r < 0) {
        return ok;
    }
    r = func_02089218(4, 0x1020000 | (((a << 8) >> 8) & 0xff00), ok);
    if (r >= 0) {
        ok = 1;
    }
    return ok;
}
