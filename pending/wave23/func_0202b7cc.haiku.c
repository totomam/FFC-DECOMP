#include "ffc/types.h"

int func_0202b7cc(uint8_t *base, int idx, uint32_t *out) {
    uint8_t *e;
    uint32_t *src;
    if (out != 0) {
        e = base + idx * 12;
        if (*(uint32_t *)(e + 0xc0) != 0) {
            src = *(uint32_t **)(e + 0xbc);
            out[0] = src[0];
            out[1] = src[1];
            out[2] = src[2];
            out[3] = src[3];
            return 1;
        }
    }
    return 0;
}
