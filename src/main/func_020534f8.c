/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" uint8_t data_0213e018[];
struct G { int v; G(int x) : v(x) {} ~G() {} };
inline int f(const G &a) { return a.v != 0; }
extern "C" void func_020534f8(int idx) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old = *ime;
    *ime = 0;
    data_0213e018[idx] = 1;
    (void)*ime;
    *(volatile uint16_t *)0x4000208 = f(old);
}
