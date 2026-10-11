#include "ffc/types.h"

int func_ov008_021a2388(void *p, uint32_t i) {
    uint32_t *bits = *(uint32_t **)((uint8_t *)p + 0x124);
    uint32_t w = bits[i >> 5];
    i &= 31;
    if (w & (1u << i)) {
        return 1;
    }
    return 0;
}
