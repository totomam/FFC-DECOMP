/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" int func_ov000_02155000(uint32_t a, uint32_t b, uint32_t c, int d);
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" uint32_t func_ov000_0215502c(uint32_t a, uint32_t b, uint32_t c) {
    for (int i = 0; i < 2; i++) {
        if (func_ov000_02155000(a, b, c, i) != 0) {
            int z = 0;
            return diff(z, 1) & a;
        }
    }
    return 0;
}
