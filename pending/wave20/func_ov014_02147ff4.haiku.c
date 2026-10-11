#include "ffc/types.h"

uint8_t func_ov014_02147ff4(int32_t a, uint8_t b, const uint8_t *tbl, int32_t *cnt, int32_t *st) {
    if (*st == 2) {
        (*cnt)++;
        *st = 0;
    }
    if (*st == 0) {
        b = tbl[*cnt];
    }
    return b;
}
