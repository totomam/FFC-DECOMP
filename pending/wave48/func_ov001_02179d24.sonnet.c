#include "ffc/types.h"
extern int64_t func_0209a76c(int32_t a, int32_t b);
int32_t func_ov001_02179d24(int32_t d, int32_t m, int32_t y)
{
    if (d == 0 && m == 0 && y == 0) return 1;
    if (d < 0 || m < 0 || y < 0) return 0;
    switch (m) {
    case 0:
        if (d != 0) return 0;
        break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (d > 31) return 0;
        break;
    case 4: case 6: case 9: case 11:
        if (d > 30) return 0;
        break;
    case 2:
        if ((y % 4 == 0 && (int32_t)(func_0209a76c(y, 100) >> 32) != 0) || (int32_t)(func_0209a76c(y, 400) >> 32) == 0) {
            if (d > 29) return 0;
        } else if (d > 28) return 0;
        break;
    default:
        return 0;
    }
    if (y < 1900) return 0;
    if (y > 2079) return 0;
    if (y == 2079) {
        if (m > 6) return 0;
        if (m == 6 && d > 6) return 0;
    }
    return 1;
}
