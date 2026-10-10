#include "ffc/types.h"

void func_02054d0c(uint8_t *a) {
    int32_t *p = *(int32_t **)(a + 0x14);
    p[2] = p[2] - 1;
}
