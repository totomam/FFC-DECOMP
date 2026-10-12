#include "ffc/types.h"

extern uint32_t *func_02008358(int16_t id);
extern void func_020084c8(int a, uint32_t b, int c, int d, int e, int f);
extern uint32_t func_0209a76c(int a, int b);

void func_02007dd0(int mode, int p1, int p2, int p3, uint32_t base)
{
    uint32_t *t;
    uint32_t row;
    uint32_t res;
    int i;


    switch (mode) {
    case 0:
    case 1:
    case 2:
        t = func_02008358((int16_t)p1);
        func_020084c8(2, base + (*t >> 24), mode, p1, p2, p3);
        break;
    case 3:
        func_020084c8(2, base, mode, p1, p2, p3);
        break;
    case 4:

        for (i = 0; i < p2 + 1; i++) {
            res = func_0209a76c(127 * (p2 + 1 - i), p2 + 1);
            if (i != 0) {
                func_020084c8(2, base + p3 * i, 2, p1, 0, 0);
            }
            row = base + p3 * i;
            func_020084c8(2, row + 1, 3, res, 0, 256);
            func_020084c8(2, row + 1, 0, p1, 0, 0);
        }
        break;
    default:
        break;
    }
}
