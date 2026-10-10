#include "ffc/types.h"

void func_0205e7e8(int32_t *out, uint8_t *src) {
    int32_t *p = *(int32_t **)(src + 0x20);
    int32_t b = -p[8];
    out[0] = -p[7];
    out[1] = b;
}
