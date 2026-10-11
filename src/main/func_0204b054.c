/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_0204b0b0(void *p, uint32_t v);
extern "C" void func_0204b0ac(void *p, uint32_t v);
extern "C" void func_0204b054(uint32_t *p);
extern "C" void func_0204b054(uint32_t *p)
{
    int *q = (int*)p;
    q[0] = 0;
    int n = q[0];
    q[3] = diff(n, 1);
    q[1] = 0;
    q[2] = 0;
    func_0204b0b0(p, 0);
    func_0204b0ac(p, 0);
    q[6] = 0;
    q[7] = 0;
    q[8] = 0;
}
