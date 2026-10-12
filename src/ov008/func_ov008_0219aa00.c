#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_ov008_0219aa00(uint32_t *p, uint32_t n) {
    uint32_t len = p[2];
    uint32_t g;
    uint32_t h;
    uint32_t *q;

    if (n > 0x3fffffffu - len) {
        func_020098e0();
    }
    if (len < 0x15555555u) {
        g = func_0209a978(3 * (len + 1), 5);
        q = (g < n) ? &n : &g;
        return len + *q;
    }
    if (len < 0x2aaaaaaau) {
        h = (len + 1) >> 1;
        q = (h < n) ? &n : &h;
        return len + *q;
    }
    return 0x3fffffffu;
}
