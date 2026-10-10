#include "ffc/types.h"

void func_02057190(uint8_t *p, uint32_t x) {
    uint32_t c = *(uint32_t *)(p + 0x40);
    uint32_t b = *(uint32_t *)(p + 0x38);
    *(uint32_t *)(p + 0x34) = b + x * c;
}
