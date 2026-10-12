#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

uint8_t func_ov001_021854d8(uint8_t *a, uint32_t n, uint8_t *b, uint32_t m, uint8_t *st, uint32_t *idx) {
    uint32_t i;
    uint32_t mask;
    uint32_t v;
    uint32_t old;

    if (n == 0) {
        return 0;
    }
    i = 0;
    mask = 1;
    if (n > 1) {
        do {
            mask = mask * 2 + 1;
        } while (mask < n);
    }
    do {
        old = *idx;
        *idx = old + 1;
        *st = (uint8_t)(a[*st] + b[old]);
        if (*idx >= m) {
            *idx = 0;
            *st = (uint8_t)(*st + m);
        }
        v = *st & mask;
        i++;
        if (i > 11) {
            v = (uint32_t)(func_0209a978(v, n) >> 32);
        }
    } while (v > n);
    return (uint8_t)v;
}
