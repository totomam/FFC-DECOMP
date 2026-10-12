#include "ffc/types.h"

extern uint64_t data_ov000_02170034[];
extern void func_02088b3c(uint32_t *out);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

uint32_t func_ov000_02159358(uint32_t n)
{
    uint64_t *st = data_ov000_02170034;
    uint32_t sd[2];
    uint32_t w0, w1, rl, rh;
    uint64_t x, s, ret;
    uint32_t hi;

    if (st[0] == 0 && st[1] == 0 && st[2] == 0) {
        func_02088b3c(sd);
        x = func_020882cc();
        w0 = sd[0];
        w1 = sd[1];
        rl = (uint32_t)x;
        rh = (uint32_t)(x >> 32);
        st[0] = (((uint64_t)((w0 >> 24) | (w1 << 8)) & 0xffffff) | ((uint64_t)rl << 24)) |
                ((uint64_t)((rh << 24) | (rl >> 8)) << 32);
        st[1] = 0x6c078965u | ((uint64_t)0x5d588b65u << 32);
        st[2] = 0x269ec3u;
    }

    s = func_0209a71c(st[1], st[0]) + st[2];
    st[0] = s;

    hi = (uint32_t)(s >> 32);
    if (n != 0) {
        hi = (uint32_t)(func_0209a71c((uint64_t)hi, (uint64_t)n) >> 32);
    }
    return hi;
}
