#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_ov007_021a6f44(uint32_t *p, uint32_t n) {
    uint32_t len = p[2];
    uint32_t g;
    uint32_t h;
    uint32_t *q;

    if (n > 0xe38e38eu - len) {
        func_020098e0();
    }
    if (len < 0x4bda12fu) {
        g = func_0209a978(3 * (len + 1), 5);
        q = (g < n) ? &n : &g;
        return len + *q;
    }
    if (len < 0x97b425eu) {
        h = (len + 1) >> 1;
        q = (h < n) ? &n : &h;
        return len + *q;
    }
    return 0xe38e38eu;
}
