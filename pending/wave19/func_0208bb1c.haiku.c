#include "ffc/types.h"

extern int32_t func_0208b4d4(int32_t a, int32_t b, uint16_t *c);

int32_t func_0208bb1c(uint32_t *p) {
    uint16_t v;
    int32_t r = func_0208b4d4(15, 8, &v);
    if (r == 0 && p != 0) {
        *p = v;
    }
    return r;
}
