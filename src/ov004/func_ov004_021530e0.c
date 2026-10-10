#include "ffc/types.h"

uint32_t func_ov004_021530e0(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xec);
    if (v == 0) {
        v = *(uint32_t *)(p + 0xe8);
    }
    return v;
}
