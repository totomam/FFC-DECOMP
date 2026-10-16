#include "ffc/types.h"

extern int32_t func_02026c84(int32_t, int32_t, int32_t, int32_t);

int32_t func_02024d70(int32_t *p, int32_t a, int32_t b, int32_t c) {
    int32_t v = p[0x5e];
    if (v == 0) {
        return 0;
    }
    return func_02026c84(v, a, b, c);
}
