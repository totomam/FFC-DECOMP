/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint32_t func_02087460(void);
extern uint32_t func_020873f8(void);
extern uint32_t data_02141788[];
extern uint8_t data_02fe0000[];
uint32_t func_02087aa0(uint32_t x);
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline uint32_t calc(uint32_t base, uint32_t a, const int &b)
{
    if (b == 0) {
        if (base >= 0x2fe0560) return base;
        return 0x2fe0560;
    }
    if (b >= 0) return a - b;
    return 0x2fe0560 - b;
}

uint32_t func_02087aa0(uint32_t x)
{
    switch (x) {
    case 0:
        if (func_02087460()) {
            return 0x2F80000;
        }
        return 0x23E0000;
    case 2: {
        uint32_t r4;
        if (data_02141788[1] == 0) {
            return 0;
        }
        r4 = func_020873f8() & 0xf;
        if (func_02087460()) {
            if (r4 == 4) {
                return 0;
            }
            return 0xDF << 20;
        }
        if (r4 == 1) {
            return 0;
        }
        return 0x27 << 20;
    }
    case 3:
        return 2 << 24;
    case 4: {
        uint32_t base = (uint32_t)data_02fe0000;
        uint32_t a = base + (0xfe << 6) - 0x800;
        return calc(base, a, 0xa00);
    }
    case 5:
        return 0x2fff680;
    case 6:
        return 0xC1 << 18;
    default:
        return 0;
    }
}
