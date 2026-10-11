#include "ffc/types.h"

int32_t func_ov006_021b5404(const uint8_t *s, int32_t n) {
    int32_t i = 0;
    if (n > 0) {
        do {
            if (s[i] == 0) {
                break;
            }
            i++;
        } while (i < n);
    }
    return i;
}
