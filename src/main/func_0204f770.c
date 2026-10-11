#include "ffc/types.h"

extern void func_0204f68c(void *a, uint32_t v);

void func_0204f770(void *a, uint32_t *p) {
    uint32_t i;
    for (i = 0; i < 4; i++) {
        if (p[i + 1] != 0) {
            func_0204f68c(a, p[i + 1]);
        }
        p[i + 1] = 0;
    }
    p[0] = 0;
}
