#include "ffc/types.h"

extern int32_t func_0208b4a4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);

int32_t func_0208b4f4(int32_t x, int32_t a, int32_t b)
{
    int32_t m;

    switch (x) {
    case 1:
        m = 1;
        break;
    case 3:
        m = 2;
        break;
    case 2:
        m = 3;
        break;
    default:
        m = 0;
        break;
    }

    if (m != 0) {
        return func_0208b4a4(m, 0, 0, a, b);
    }
    return (int32_t)0xffff;
}
