/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct S { uint8_t p[0x1c]; int size; uint8_t q[5]; uint8_t c; uint16_t h; };
extern "C" void func_ov003_02155508(S *p);
extern "C" void func_ov003_02155508(S *p) {
    int n = p->size;
    p->size = diff(n, n);
    p->h = 0;
    p->c = 0;
}
