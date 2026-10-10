/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov002_021a1ad4(uint8_t *p) {
    int a = *(volatile int32_t *)(p + 0xbc);
    int n = *(volatile int32_t *)(p + 0xbc);
    *(volatile int32_t *)(p + 0xbc) = diff(Num(n), a);
}
