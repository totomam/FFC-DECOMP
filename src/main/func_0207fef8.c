#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern int32_t func_020812a4(int32_t x);
extern int32_t func_02081278(int32_t x);
extern void func_02084a90(void *a, void *b);

int32_t func_0207fef8(int32_t *p, int32_t *q) {
    int32_t tmp[4];
    int32_t *o;
    int64_t d;
    int32_t t;
    int32_t x;

    o = (p == q) ? tmp : q;
    d = (int64_t)func_0209a71c((uint64_t)(int64_t)p[0], (uint64_t)(int64_t)p[3])
      - (int64_t)func_0209a71c((uint64_t)(int64_t)p[1], (uint64_t)(int64_t)p[2]);
    t = (int32_t)((d + 0x800) >> 12);
    if (t == 0) {
        return -1;
    }
    x = func_02081278(func_020812a4(t));
    o[0] = (int32_t)((int64_t)func_0209a71c((uint64_t)(int64_t)x, (uint64_t)(int64_t)p[3]) >> 12);
    o[1] = -(int32_t)((int64_t)func_0209a71c((uint64_t)(int64_t)x, (uint64_t)(int64_t)p[1]) >> 12);
    o[2] = -(int32_t)((int64_t)func_0209a71c((uint64_t)(int64_t)x, (uint64_t)(int64_t)p[2]) >> 12);
    o[3] = (int32_t)((int64_t)func_0209a71c((uint64_t)(int64_t)x, (uint64_t)(int64_t)p[0]) >> 12);
    if (o == tmp) {
        func_02084a90(tmp, q);
    }
    return 0;
}
