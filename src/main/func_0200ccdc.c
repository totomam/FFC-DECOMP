#include "ffc/types.h"

void func_0200ccdc(uint32_t *a0) {
    uint8_t *p = (uint8_t *)a0[5];
    if (*p) {
        a0[3] = (a0[3] & ~0xffu) | 2;
    }
}
