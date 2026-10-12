#include "ffc/types.h"

typedef struct {
    uint32_t b : 20;
    uint32_t type : 4;
    uint32_t a : 8;
    int32_t cnt : 8;
    uint32_t stride : 16;
    uint32_t c : 8;
} S;

extern S *func_02008358(int16_t id);
extern int func_0209a76c(int x);
extern void func_020084c8(int a, uint8_t *dst, int b, int c, int d, int e);

void func_02007d38(int p0, int p1, uint8_t *p2) {
    S *r4 = func_02008358((int16_t)p0);
    int i;

    if (r4->type == 4) {
        for (i = 0; i < r4->cnt + 1; i++) {
            uint8_t *base = p2 + r4->a;
            int off = i * r4->stride;
            func_020084c8(4, base + off, func_0209a76c(127 * (r4->cnt + 1 - i)), 0, 0, 0);
            func_020084c8(0, base + off, p0, p1, 0, 0);
        }
    } else {
        func_020084c8(0, p2 + r4->a, p0, p1, 0, 0);
    }
}
