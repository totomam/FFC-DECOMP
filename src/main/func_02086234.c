#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, uint32_t b, int32_t c);

int32_t func_02086234(void) {
    int32_t r = 0;
    if (func_02089218(4, 0x03002000, 0) >= 0) {
        r = 1;
    }
    return r;
}
