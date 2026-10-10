/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_0208135c(int32_t *a, int32_t *b) {
    int64_t s = (int64_t)a[0] * b[0] + (int64_t)a[1] * b[1] + (int64_t)a[2] * b[2];
    return (int32_t)((s + 0x800) >> 12);
}
