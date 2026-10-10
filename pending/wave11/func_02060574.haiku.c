#include "ffc/types.h"

void func_02060574(uint16_t *p, uint32_t v) {
    p[2] = (uint16_t)((p[2] & 0xffc0) | v);
}
