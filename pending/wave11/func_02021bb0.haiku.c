#include "ffc/types.h"

void func_02021bb0(uint8_t *a, uint32_t idx, uint32_t val) {
    uint32_t **pp = (uint32_t **)(a + 0xcc);
    (*pp)[idx] = val;
}
