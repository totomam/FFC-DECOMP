/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int32_t data_0213e178[];
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int pass(const Num &a) { return a.v; }
uint16_t func_0206c22c(uint8_t *p);
uint16_t func_0206c22c(uint8_t *p)
{
    uint16_t old;
    int v = 0;
    old = *(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = 0;
    if (old != 0) {
        v = 1;
    }
    int n = pass(v);
    if (*p == 0) {
        old = *(volatile uint16_t *)0x04000208;
        *(volatile uint16_t *)0x04000208 = n;
        return old;
    }
    *p = 0;
    data_0213e178[1]--;
    old = *(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = n;
    return old;
}
}
