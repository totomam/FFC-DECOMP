#include "ffc/types.h"

int32_t func_ov000_0214989c(uint8_t **pp) {
    uint8_t *p = *pp;
    uint8_t *q = p + 1;
    uint32_t v = *p;
    if (v & 0x80) {
        uint32_t n = v & 0x7f;
        v = 0;
        uint32_t k = n - 1;
        if (n != 0) {
            do {
                if (v & 0xff000000) {
                    return -1;
                }
                v = (v << 8) + *q++;
            } while (k-- != 0);
        }
    }
    *pp = q;
    return v;
}
