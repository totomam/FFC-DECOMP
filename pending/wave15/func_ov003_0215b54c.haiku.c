#include "ffc/types.h"

uint32_t func_ov003_0215b54c(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0xa8);
    return *(uint32_t *)(q + 0x84) != 0;
}
