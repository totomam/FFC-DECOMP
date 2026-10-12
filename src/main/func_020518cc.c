#include "ffc/types.h"

extern uint32_t data_020b04a4[];
extern uint32_t data_020b04ac;
extern int32_t func_0207eab0(void *a, uint8_t *b, uint32_t n);

int32_t func_020518cc(void *a, uint8_t *b, volatile uint32_t c)
{
    int32_t sum = 0;
    uint32_t saved = c;

    if (saved != 0) {
        uint32_t cv = c;
        for (;;) {
            volatile uint32_t *pl = (cv < data_020b04a4[2]) ? &c : &data_020b04ac;
            uint32_t lim = *pl;
            int32_t r = func_0207eab0(a, b, lim);
            sum += r;
            uint32_t nc = c - r;
            c = nc;
            cv = nc;
            b += r;
            if (r < (int32_t)lim) break;
            if (nc == 0) break;
        }
    }
    if ((int32_t)saved == sum) return sum;
    return -1;
}
