#include "ffc/types.h"

uint32_t func_ov002_021aa1b4(int32_t *p) {
    uint32_t r = 0;
    int i;
    for (i = 2; i < 13; i++) {
        if (p[i + 6] > 2) {
            r |= 1u << i;
        }
    }
    return r;
}
