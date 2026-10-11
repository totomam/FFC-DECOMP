#include "ffc/types.h"

void func_ov006_021b46e8(int r0, uint32_t r1) {
    volatile uint32_t *p;
    uint32_t a, b;
    if (r0 == 1) {
        p = (volatile uint32_t *)0x04001000;
        a = (*p & 0x1f00) >> 8;
        r1 |= a;
        b = *p & 0xffffe0ff;
        *p = (r1 << 8) | b;
        return;
    }
    p = (volatile uint32_t *)(1u << 26);
    a = (*p & 0x1f00) >> 8;
    r1 |= a;
    b = *p & 0xffffe0ff;
    *p = (r1 << 8) | b;
}
