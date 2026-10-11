#include "ffc/types.h"

void func_ov006_021b46e8(int r0, uint32_t r1) {
    volatile uint32_t *p;
    if (r0 == 1) {
        p = (volatile uint32_t *)0x04001000;
    } else {
        p = (volatile uint32_t *)0x04000000;
    }
    r1 = (r1 | ((*p & 0x1f00) >> 8)) << 8;
    *p = r1 | (*p & 0xffffe0ff);
}
