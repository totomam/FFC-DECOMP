#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, uint32_t b, uint32_t c);

int32_t func_0208a28c(void)
{
    int32_t a = 7;
    uint32_t b = 0;
    int32_t r = func_02089218(a, b, b);
    if (r < 0) {
        return func_02089218(a, b, b);
    }
    return r;
}
