#include "ffc/types.h"

uint32_t func_ov014_02147ff4(uint32_t a, uint32_t r1, const uint8_t *tab, int32_t *idx, int32_t *st) {
    if (*st == 2) {
        (*idx)++;
        *st = 0;
    }
    if (*st == 0) {
        r1 = tab[*idx];
    }
    return r1;
}
