#include "ffc/types.h"

int32_t func_0204b000(int8_t *hay, int32_t hayLen, int8_t *pat, int32_t patLen) {
    int32_t i;
    int32_t j;
    int32_t count;
    int8_t *s;

    s = hay;
    if (hayLen < patLen) {
        return -1;
    }
    count = hayLen - patLen + 1;
    for (i = 0; i < count; i++) {
        if (pat[i] == s[i]) {
            for (j = 1; j < patLen; j++) {
                if (s[i + j] != pat[j]) {
                    break;
                }
            }
            if (j == patLen) {
                return 0;
            }
        }
    }
    return -1;
}
