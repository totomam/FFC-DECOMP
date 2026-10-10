#include "ffc/types.h"

uint32_t func_020223fc(uint32_t *p) {
    uint32_t v = p[2];
    return ((((v + 7) >> 3) + 3)) & ~3u;
}
