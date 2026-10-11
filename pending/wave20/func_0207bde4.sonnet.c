#include "ffc/types.h"

extern int32_t func_0207a09c(void *p);

int32_t func_0207bde4(void *a) {
    uint32_t *p = (uint32_t *)a;
    if (p[0x4a] == 0) {
        if (func_0207a09c(a) == 0) {
            return 0;
        }
    }
    p[0x4a]++;
    return 1;
}
