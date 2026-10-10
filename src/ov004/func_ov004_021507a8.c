#include "ffc/types.h"

void func_ov004_021507a8(uint32_t *out, uint32_t **base, uint32_t x) {
    out[0] = (uint32_t)((*base) + (x >> 5));
    out[1] = 1u << (x & 31);
}
