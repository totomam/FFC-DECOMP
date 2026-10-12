#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t data_020a1bd0[];

void func_ov003_02158e4c(int32_t *out, int32_t *p, uint16_t idx) {
    uint32_t n = (uint32_t)(uint16_t)idx >> 4;
    int16_t *t = &data_020a1bd0[n * 2];
    int32_t a = (int32_t)t[0] << 12;
    uint32_t r7 = func_020817c8(a, p[1]);
    int32_t b = (int32_t)t[1] << 12;
    out[0] = (int32_t)(func_020817c8(b, p[0]) - r7) >> 12;
    uint32_t r6 = func_020817c8(b, p[1]);
    out[1] = (int32_t)(func_020817c8(a, p[0]) + r6) >> 12;
}
