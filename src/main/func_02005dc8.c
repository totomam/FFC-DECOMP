#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);

typedef struct {
    uint8_t pad[0x80];
    uint32_t f80;
    uint32_t pad84;
    uint64_t f88;
} S;

uint32_t func_02005dc8(S *p) {
    uint64_t m1, m2, d, r;
    uint32_t out;

    m1 = func_0209a6d4(func_020882cc() << 6, 0x82ea);
    m2 = func_0209a6d4(p->f88 << 6, 0x82ea);
    d = (uint64_t)p->f80 - (m1 - m2);
    r = func_0209a6d4(d, 1000);
    out = 0;
    if (r != 0) {
        m1 = func_0209a6d4(func_020882cc() << 6, 0x82ea);
        m2 = func_0209a6d4(p->f88 << 6, 0x82ea);
        d = (uint64_t)p->f80 - (m1 - m2);
        out = (uint32_t)func_0209a6d4(d, 1000);
    }
    return out;
}
