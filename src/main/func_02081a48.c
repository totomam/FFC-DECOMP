#include "ffc/types.h"

void func_02081a48(uint16_t *p, int32_t x) {
    if (x == 0) {
        *p = 0;
        return;
    }
    if (x > 0) {
        *p = (uint16_t)(x | 0x4000);
        return;
    }
    *p = (uint16_t)((-x) | 0x8000);
}
