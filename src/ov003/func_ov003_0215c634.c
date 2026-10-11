#include "ffc/types.h"

void func_ov003_0215c634(int32_t a, int32_t b, int32_t *pa, int32_t *pb)
{
    int32_t d;
    if (a > 0x8000) {
        a -= 0x10000;
    }
    if (b > 0x8000) {
        b -= 0x10000;
    }
    d = b - a;
    if (d < 0x8000) {
        b = a + d;
    } else {
        b = a - (0x10000 - d);
    }
    *pa = a;
    *pb = b;
}
