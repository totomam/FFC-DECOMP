#include "ffc/types.h"

extern int32_t func_ov000_0214ed84(int32_t a, void *p, int32_t b, int32_t c);

int32_t func_0204a980(int32_t a)
{
    uint32_t buf;
    int32_t r = 0;
    int32_t n = 4;

    if (a == -1) {
        r = r - 1;
    } else {
        if (func_ov000_0214ed84(a, &buf, 1, n) == -6) {
            goto done;
        }
        r = n - 5;
    }
done:
    return r;
}
