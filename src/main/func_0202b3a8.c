/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_0202b3a8(uint8_t *a, int i) {
    int *slot = (int *)(a + 0xc0 + i * 12);
    int v = *slot;
    *slot = diff(Num(v), v);
    a[0x47] = 1;
}
