#include "ffc/types.h"

int32_t func_ov000_0214989c(uint8_t **pp) {
    uint8_t *p = *pp;
    uint32_t v = *p;
    uint8_t *q = p + 1;
    if (v & 0x80) {
        uint32_t n = v & 0x7f;
        uint32_t k = n - 1;
        v = 0;
        if (n == 0) {
            goto done;
        }
        do {
            if (v & 0xff000000) {
                return -1;
            }
            v = (v << 8) + *q;
            q++;
        } while (k-- != 0);
    }
done:
    *pp = q;
    return v;
}
