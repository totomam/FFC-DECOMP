/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_ov005_02197b74(void *p, int a, int b);
extern uint8_t data_ov008_021a7f20[];
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void *func_ov008_0219ce9c(void *a, void *b) {
    uint8_t *p = (uint8_t *)a;
    uint32_t *r4 = (uint32_t *)b;
    func_ov005_02197b74(a, 2, 0);
    *(void **)p = data_ov008_021a7f20;
    *(void **)(p + 0x158) = b;
    int n = (int)r4[1];
    r4[1] = (uint32_t)diff(n, n);
    p[0x105] = 0x40;
    return a;
}
