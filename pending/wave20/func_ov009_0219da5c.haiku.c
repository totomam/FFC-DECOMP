#include "ffc/types.h"

void func_ov009_0219da5c(uint8_t *p, uint8_t v)
{
    uint8_t *a = *(uint8_t **)(p + 0x88);
    if (a) {
        a += 0x41;
        *a = v;
    }
    a = *(uint8_t **)(p + 0x90);
    if (a) {
        a += 0x41;
        *a = v;
    }
    p[0x17a] = v;
}
