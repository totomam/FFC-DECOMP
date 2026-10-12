#include "ffc/types.h"

extern uint32_t *func_02008358(int16_t id);
extern int func_0209a76c(int x);
extern void func_020084c8(int a, uint8_t *dst, int b, int c, int d, int e);

void func_02007d38(int p0, int p1, uint8_t *p2) {
    uint32_t *r4 = func_02008358((int16_t)p0);
    int i;
    uint8_t *dst;

    if (((r4[0] << 8) >> 28) == 4) {
        for (i = 0; i < (int8_t)r4[1] + 1; i++) {
            dst = p2 + (r4[0] >> 24) + i * (uint16_t)((r4[1] << 8) >> 16);
            func_020084c8(4, dst, func_0209a76c(127 * ((int8_t)r4[1] + 1 - i)), 0, 0, 0);
            func_020084c8(0, dst, p0, p1, 0, 0);
        }
    } else {
        func_020084c8(0, p2 + (r4[0] >> 24), p0, p1, 0, 0);
    }
}
