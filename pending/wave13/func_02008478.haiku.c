#include "ffc/types.h"

void func_02008478(uint8_t *p) {
    uint32_t n = *(uint32_t *)p;
    uint16_t *c = (uint16_t *)(p + 0xe + (n << 4));
    if (*c != 0) {
        (*c)--;
    }
}
