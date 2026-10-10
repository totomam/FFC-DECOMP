#include "ffc/types.h"

void func_02019fe0(uint8_t *p, uint32_t n, uint8_t v) {
    if (n >= 1 && n <= 3) {
        uint8_t *q = p + (n - 1);
        q[0xd] = v;
    }
}
