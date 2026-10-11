#include "ffc/types.h"

int32_t func_ov006_0219dcb0(uint8_t *p, int32_t n) {
    int32_t i = 0;
    if (n > 0) {
        do {
            uint8_t c = *p++;
            if (c < 0x20 || c > 0x7f) {
                return -1;
            }
            i++;
        } while (i < n);
    }
    return 0;
}
