#include "ffc/types.h"

void func_02006080(uint32_t *p) {
    *(uint32_t *)((uint8_t *)p + 0) = 0;
    *(uint32_t *)((uint8_t *)p + 4) = 0;
    *(uint32_t *)((uint8_t *)p + 8) = 0;
    *(uint8_t *)((uint8_t *)p + 0xc) = 0;
}
