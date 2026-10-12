#include "ffc/types.h"

extern uint32_t data_020b04a4[];
extern uint32_t data_020b04ac;
extern int32_t func_0207eab0(void *a, uint8_t *b, uint32_t n);

int32_t func_020518cc(void *a, uint8_t *b, uint32_t c, uint32_t d)
{
    int32_t sum = 0;
    uint32_t saved = c;

    if (c != 0) {
        for (;;) {
            uint32_t *pl = (c < data_020b04a4[2]) ? &c : &data_020b04ac;
            uint32_t lim = *pl;
            int32_t r = func_0207eab0(a, b, lim);
            sum += r;
            c -= r;
            b += r;
            if (r < (int32_t)lim) {
                break;
            }
            if (c == 0) {
                break;
            }
        }
    }

    if ((int32_t)saved == sum) {
        return sum;
    }
    return -1;
}
