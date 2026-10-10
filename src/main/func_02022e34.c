/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0205b2e4(int p);
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int get(const Num &a) { return a.v; }
extern "C" void func_02022e34(uint8_t *p) {
    int n = *(int *)(p + 0x8c);
    func_0205b2e4(get(n));
}
