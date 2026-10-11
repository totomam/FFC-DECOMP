#include "ffc/types.h"

int func_ov001_0218680c(int32_t *p) {
    int32_t v;
    if (p[4] > 0) {
        return 2;
    }
    v = p[0x18];
    if (v == 3 || v == 0) {
        return 1;
    }
    if (v == 1) {
        return 0;
    }
    return 3;
}
