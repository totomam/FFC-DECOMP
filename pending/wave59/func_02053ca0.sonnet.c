/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02056844(void*);
extern "C" void func_02053df4(void*, void*, uint32_t);
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_02053ca0(int *p, void *q, void *r) {
    int n = p[1];
    p[1] = diff(n, n);
    int z = 0;
    if (p[0] != 0) { func_02056844((void*)p[0]); p[0] = z; p[2] = z; }
    uint16_t s16;
    volatile uint8_t *sv = (volatile uint8_t*)&s16;
    sv[0] = 0; uint8_t x = sv[0]; sv[1] = x;
    volatile uint8_t *t = sv - 4;
    t[0] = x;
    func_02053df4(p, r, *(volatile uint32_t*)t);
}
