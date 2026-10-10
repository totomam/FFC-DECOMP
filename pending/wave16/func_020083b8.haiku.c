#include "ffc/types.h"

void func_020083b8(uint8_t *p, int32_t a, int32_t idx) {
    uint8_t *q = p + 0x10;
    int16_t s = *(int16_t *)(q + (idx << 4));
    *(int16_t *)(p + (s << 4) + 0x12) = (int16_t)a;
    s = *(int16_t *)(q + (idx << 4));
    *(int16_t *)(p + (a << 4) + 0x10) = s;
    *(int16_t *)(p + (a << 4) + 0x12) = (int16_t)idx;
    *(int16_t *)(q + (idx << 4)) = (int16_t)a;
}
