#include "ffc/types.h"

extern int32_t func_0204de50(int32_t a, int32_t b, int32_t c);
extern int32_t func_0204b0b8(int32_t x, int32_t a, int32_t b, int32_t c);

int32_t func_0204d9c8(int32_t a, int32_t b, int32_t c) {
    int32_t r = func_0204de50(a, b, c);
    if (func_0204b0b8(r, a, b, c) != 0) {
        return 0;
    }
    return -1;
}
