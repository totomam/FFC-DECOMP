#include "ffc/types.h"

extern int32_t func_0202735c(void *p, int32_t a, int32_t b);

int32_t func_02024de4(uint8_t *p, int32_t a, int32_t b) {
    void *q = *(void **)(p + 0x178);
    if (q) {
        return func_0202735c(q, a, b);
    }
    return 0;
}
