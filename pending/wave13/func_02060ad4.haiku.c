#include "ffc/types.h"

void func_02060ad4(uint8_t *p, uint32_t v) {
    uint8_t r = v & ~0x20;
    p[8] = (p[8] & 0x20) | r;
}
