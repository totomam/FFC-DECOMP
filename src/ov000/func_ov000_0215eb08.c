#include "ffc/types.h"

extern int32_t func_ov000_0215b73c(int32_t a, int32_t b, int32_t c);
extern int32_t func_ov000_02163654(int32_t a);

int32_t func_ov000_0215eb08(int32_t a, int32_t b, int32_t c) {
    int32_t r4 = 1;
    if (func_ov000_0215b73c(b, 1, c) == 0) {
        return 0;
    }
    if (func_ov000_02163654(b) == 0) {
        r4 = 0;
    }
    return r4;
}
