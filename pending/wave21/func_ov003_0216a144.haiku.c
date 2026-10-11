#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(uint32_t x);

void func_ov003_0216a144(uint8_t *p) {
    uint8_t *q = func_ov003_02146494(func_020424e0(*(uint32_t *)(p + 0x80)));
    if (q[0xe4] == 0) {
        uint32_t *w = (uint32_t *)(p + 0xc);
        *w = (*w & ~0xffu) | 2u;
    }
}
