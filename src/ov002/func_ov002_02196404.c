#include "ffc/types.h"

void func_ov002_02196404(uint8_t *base, uint8_t val) {
    uint8_t *p = *(uint8_t **)(base + 948);
    if (p != 0) {
        *p = val;
    }
}
