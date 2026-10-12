#include "ffc/types.h"

extern uint64_t data_ov000_02170034[];
extern void func_02088b3c(uint64_t *out);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

uint32_t func_ov000_02159358(uint32_t n)
{
    uint64_t *st;
    uint64_t sd;
    uint64_t x, s;
    uint32_t hi;

    if (data_ov000_02170034[0] == 0 && data_ov000_02170034[1] == 0 && data_ov000_02170034[2] == 0) {
        func_02088b3c(&sd);
        x = func_020882cc();
        sd = ((sd >> 24) & 0xffffff) | (x << 24);
        data_ov000_02170034[0] = sd;
        st = data_ov000_02170034;
        st[1] = 0x6c078965u | ((uint64_t)0x5d588b65u << 32);
        st[2] = 0x269ec3u;
    }
    st = data_ov000_02170034;
    s = func_0209a71c(st[1], st[0]) + st[2];
    st[0] = s;

    if (n != 0) {
        s = func_0209a71c(s >> 32, n);
    }
    return (uint32_t)(s >> 32);
}
