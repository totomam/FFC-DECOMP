/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t *func_ov000_02152ae4(uint32_t arg);
extern uint32_t func_ov000_0214fa18(void);
int func_ov000_021544e8(void);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

int func_ov000_021544e8(void) {
    Num n(0x10);
    uint8_t *p = func_ov000_02152ae4(n.v);
    uint16_t flags = *(uint16_t *)(p + 0x14c6);
    uint8_t i = 0;
    uint8_t k = 0;
    if (flags == 0) {
        return diff(n, 0x11);
    }
    while (i < *(uint16_t *)(p + 0x14ce)) {
        uint32_t bit = 1u << i;
        if (flags & bit) {
            if (k == p[0x14c5]) {
                if (func_ov000_0214fa18() & (uint16_t)bit) {
                    return (int8_t)i;
                }
                p[0x14c5]++;
            }
            k++;
        }
        i++;
    }
    return -1;
}
