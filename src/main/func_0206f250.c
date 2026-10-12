#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern uint32_t func_0209a978(uint32_t size, uint32_t align);

uint32_t func_0206f250(uint32_t *p, uint32_t n) {
    uint32_t a = p[2];
    if (n > 0xFFFFFFFFu - a) {
        func_020098e0();
    }
    if (a < 0x55555555u) {
        uint32_t cap = func_0209a978(3 * (a + 1), 5);
        uint32_t *q = (cap < n) ? &n : &cap;
        return a + *q;
    }
    if (a < 0xAAAAAAAAu) {
        uint32_t c2 = (a + 1) >> 1;
        uint32_t *q2 = (c2 < n) ? &n : &c2;
        return a + *q2;
    }
    return 0xFFFFFFFFu;
}
