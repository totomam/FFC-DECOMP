#include "ffc/types.h"

extern int32_t func_0208b4a4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);

int32_t func_0208b548(int32_t a, int32_t b, int32_t c, int32_t d) {
    int32_t v = 0;
    if (a == 0) {
        if (b == 1) {
            v = 6;
        }
        if (b == 0) {
            v = 7;
        }
    } else if (a == 1) {
        if (b == 1) {
            v = 4;
        }
        if (b == 0) {
            v = 5;
        }
    } else if (a == 2) {
        if (b == 1) {
            v = 8;
        }
        if (b == 0) {
            v = 9;
        }
    }
    if (v != 0) {
        return func_0208b4a4(v, 0, 0, c, d);
    }
    return 0xffff;
}
