#include "ffc/types.h"

void func_ov006_021a7de0(void) {
    uint16_t *a = (uint16_t *)0x04001008;
    uint16_t *b = (uint16_t *)0x04000008;

    a[0] = (a[0] & ~3) | 3;
    a[1] = (a[1] & ~3) | 3;

    b[0] = (b[0] & ~3) | 3;
    b[1] = (b[1] & ~3) | 3;
    b[2] = (b[2] & ~3) | 3;
}
