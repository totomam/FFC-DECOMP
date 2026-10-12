#include "ffc/types.h"

int8_t *func_ov001_0217f53c(int8_t *s, int32_t n) {
    int8_t *p = s;
    int32_t lim = n - 6;
    if (lim > 0) {
        do {
            if (p[0] == '\\' && p[1] == 'f' && p[2] == 'i' && p[3] == 'n' &&
                p[4] == 'a' && p[5] == 'l' && p[6] == '\\') {
                return p;
            }
            p++;
        } while (p - s < lim);
    }
    return 0;
}
