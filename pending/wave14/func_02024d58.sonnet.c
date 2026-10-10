#include "ffc/types.h"

extern int32_t func_0202698c(int32_t, int32_t, int32_t);

int32_t func_02024d58(int32_t *p, int32_t a, int32_t b) {
    int32_t v = p[0x5e];
    if (v == 0) {
        return 0;
    }
    return func_0202698c(v, a, b);
}
