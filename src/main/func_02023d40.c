#include "ffc/types.h"

void func_02023d40(uint8_t *p, uint32_t v) {
    *(uint32_t *)(p + 0xf0) = v;
    *(uint32_t *)(p + 0x180) = 0;
}
