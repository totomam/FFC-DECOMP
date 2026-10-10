/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_020571d0(void *p);
extern "C" void func_ov004_0214541c(void *a, uint32_t b);

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov004_02145b14(uint8_t *p) {
    func_020571d0(p);
    int n = *(int *)(p + 0x34);
    func_ov004_0214541c(*(void **)(p + 0x40), diff(n, 0));
}
