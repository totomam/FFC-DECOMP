#include "ffc/types.h"

void func_02036df8(uint32_t *p, uint32_t v) {
    p[2] = (p[2] & 0x1fffffff) | (v << 29);
}
