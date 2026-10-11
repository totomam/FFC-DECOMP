/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_02084dd4(uint8_t *p, uint8_t *q, uint32_t n) {
    uint8_t *end = p + n;
    while (p < end) {
        int32_t d = *p++ - *q++;
        if (d != 0) {
            return d;
        }
    }
    return 0;
}
