#include "ffc/types.h"

extern uint32_t func_02083720(uint32_t x);
extern const uint8_t data_020a1930[];

uint32_t func_02078508(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t s1_, uint32_t s2_) {
    volatile uint32_t s1 = s1_, s2 = s2_;
    uint32_t acc = 0;
    uint32_t nc, nd;
    uint32_t m1, m2, x2, y;
    const uint8_t *p;
    for (;;) {
        m1 = 0xFFFFFFFFu << s1;
        m2 = 0xFFFFFFFFu << s2;
        x2 = c & m1;
        y = d & m2;
        if (y > b) {
            if (x2 > a) {
                return acc + (b & m2) * x2 + ((a & m1) << s2) + ((b & ~m2) << s1) + (a & ~m1);
            }
            acc += x2 * y;
            a -= x2;
            c -= x2;
            d = y;
        } else {
            acc += c * y;
            if (x2 > a) {
                b -= y;
                c = x2;
                d -= y;
            } else {
                d -= y;
                acc += x2 * d;
                b -= y;
                a -= x2;
                c -= x2;
            }
        }
        nc = (c < 8) ? 31 - func_02083720(c) : 3;
        nd = (d < 8) ? 31 - func_02083720(d) : 3;
        p = data_020a1930 + (nd << 3) + (nc << 1);
        s1 = p[0];
        s2 = p[1];
    }
}
