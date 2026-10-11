#include "ffc/types.h"

extern int32_t data_ov001_02194be8;
extern int32_t func_ov001_0217249c(int32_t *p);
extern int32_t func_ov001_02172524(int32_t *p);

int32_t func_ov001_02172610(int32_t *p) {
    if (p == 0) {
        return 0;
    }
    if (p[0] == 0) {
        return 0;
    }
    if (p[1] < 0) {
        return 0;
    }
    if (p[1] >= data_ov001_02194be8) {
        return 0;
    }
    if (func_ov001_0217249c(p) != 1) {
        return 0;
    }
    return func_ov001_02172524(p);
}
