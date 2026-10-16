#include "ffc/types.h"
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t data_020a1bd0[];
void func_ov003_02158e4c(int32_t *out, int32_t *v, int32_t ang) {
    volatile int32_t buf[25];
    int i = ((uint16_t)ang >> 4) * 2;
    buf[0] = data_020a1bd0[i] << 12;
    int32_t r7 = func_020817c8(buf[0], v[1]);
    int32_t b = data_020a1bd0[i + 1] << 12;
    int32_t x = func_020817c8(b, v[0]) - r7;
    out[0] = x >> 12;
    int32_t t = func_020817c8(b, v[1]);
    int32_t u = func_020817c8(buf[0], v[0]);
    out[1] = (u + t) >> 12;
}
