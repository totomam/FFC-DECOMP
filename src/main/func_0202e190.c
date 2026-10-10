#include "ffc/types.h"

int func_0202e190(uint32_t *out, uint32_t val, uint8_t *flags, uint32_t *src) {
    if (flags[1] == 1) {
        out[0] = val;
        out[1] = src[1];
        out[2] = src[1];
        out[3] = 0;
        if (flags[2] == 1) {
            out[2] = src[2];
        }
        return 1;
    }
    return 0;
}
