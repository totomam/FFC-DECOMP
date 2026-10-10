#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, uint32_t b, int32_t c);

int32_t func_02086400(void) {
    int32_t r = 0;
    if (func_02089218(4, 0x3002d00, 0) >= 0) {
        r = 1;
    }
    return r;
}
