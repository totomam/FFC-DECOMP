#include "ffc/types.h"

void func_020424d4(uint8_t *p, uint32_t v) {
    uint32_t *q = *(uint32_t **)(p + 0x88);
    if (q) {
        *q = v;
    }
}
