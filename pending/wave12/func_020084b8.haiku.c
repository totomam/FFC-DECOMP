#include "ffc/types.h"

void func_020084b8(int32_t *p) {
    uint8_t *q = (uint8_t *)p + ((uint32_t)*p << 4);
    *p = *(int16_t *)(q + 16);
}
