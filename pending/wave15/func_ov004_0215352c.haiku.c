#include "ffc/types.h"

extern int32_t func_0206cb80(void *p);

int32_t func_ov004_0215352c(uint8_t *p) {
    void *q = *(void **)(p + 0x28c);
    if (q) {
        return func_0206cb80(q);
    }
    return 1;
}
