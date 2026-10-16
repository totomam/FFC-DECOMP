#include "ffc/types.h"
extern int32_t func_02081210(int32_t a, int32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
void func_ov004_0214f66c(uint32_t *out, uint8_t *base, int32_t idx) {
    int32_t *p = (int32_t *)(base + idx * 4);
    int32_t y = p[0xac / 4] << 12;
    int32_t x = p[0xb4 / 4] << 12;
    *out = func_020817c8(func_02081210(x, y), 0x19 << 14);
}
