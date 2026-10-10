#include "ffc/types.h"

void func_02007018(uint8_t *p, uint16_t v) {
    *(uint16_t *)(p + 0xa) = v;
    *(uint8_t *)(p + 0x11) = 1;
}
