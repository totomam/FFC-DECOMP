#include "ffc/types.h"

extern uint32_t func_ov000_02148a64(uint8_t *s, uint8_t **end);

uint32_t func_ov000_02148a8c(uint8_t *s, uint32_t *out) {
    uint32_t acc = 0;
    int n = 0;
    uint8_t *p = s;
    uint8_t *end;
    uint32_t v;

    do {
        acc <<= 8;
        v = func_ov000_02148a64(p, &end);
        if (p == end) return 0;
        p = end;
        if (v > 0xff) goto fail;
        if (n != 3) {
            p = end + 1;
            if (*end != '.') goto fail;
        }
        if (n == 3 && *p != 0) {
fail:
            return 0;
        }
        n++;
        acc |= v;
    } while (n < 4);

    *out = acc;
    return 1;
}
