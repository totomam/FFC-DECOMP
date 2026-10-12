#include "ffc/types.h"

extern int32_t func_ov000_021661c4(uint8_t *p, int32_t len, uint16_t *out);

int32_t func_ov000_02166384(uint8_t *p, int32_t len, uint16_t *out, int32_t max) {
    int32_t count = 0;
    int32_t off = 0;
    uint16_t *o = out;
    int32_t lim;
    int32_t n;

    if (p == 0) {
        *out = 0;
        return 1;
    }
    lim = max + 1;
    while (*p != 0 && lim > count && len > off) {
        n = func_ov000_021661c4(p, len - off, o);
        if (n == 0) {
            *out = 0;
            return 0;
        }
        off += n;
        p += n;
        count++;
        o++;
    }
    *o = 0;
    return count + 1;
}
