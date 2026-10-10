#include "ffc/types.h"

uint32_t func_ov000_0214d210(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xa0);
    if (v == 0) {
        v = *(uint32_t *)(p + 0xa4);
    }
    return v;
}
