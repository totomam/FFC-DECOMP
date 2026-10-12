#include "ffc/types.h"

int32_t func_0204b000(int8_t *hay, int32_t hayLen, int8_t *pat, int32_t patLen) {
    int32_t i;
    int32_t j;
    int32_t n = patLen;
    int32_t count;

    if (hayLen < n) {
        return -1;
    }
    count = hayLen - n + 1;
    for (i = 0; i < count; i++) {
        if (pat[i] == hay[i]) {
            int8_t *p = hay + i;
            for (j = 1; j < n; j++) {
                if (p[j] != pat[j]) break;
            }
            if (j == n) return 0;
        }
    }
    return -1;
}
