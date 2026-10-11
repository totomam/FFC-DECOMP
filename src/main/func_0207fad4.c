#include "ffc/types.h"

void func_0207fad4(uint8_t *p, uint32_t a, uint32_t b) {
    uint32_t *q = (uint32_t *)(p + 0x28);
    if (b == 0) {
        a = 0;
    } else if (a == 0) {
        b = 0;
    }
    q[11] = a;
    q[12] = b;
}
