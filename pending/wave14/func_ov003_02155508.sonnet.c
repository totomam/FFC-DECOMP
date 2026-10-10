/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov003_02155508(uint8_t *p) {
    int n = *(int32_t *)(p + 0x1c);
    *(uint16_t *)(p + 0x26) = 0;
    *(int32_t *)(p + 0x1c) = diff(n, n);
    *(uint8_t *)(p + 0x25) = 0;
}
