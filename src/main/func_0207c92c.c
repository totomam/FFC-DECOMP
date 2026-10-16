#include "ffc/types.h"
extern int32_t func_0209a76c(int32_t a, int32_t b);
int32_t func_0207c92c(int32_t *p) {
    if (p[2] >= p[3]) return p[1];
    {
        int32_t a = p[0];
        return a + func_0209a76c((p[1] - a) * p[2], p[3]);
    }
}
