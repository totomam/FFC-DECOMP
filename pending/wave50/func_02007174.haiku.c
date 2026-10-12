#include "ffc/types.h"

extern int func_020072c8(void *p, int a, int b, int c);
extern int func_02006f5c(void *p, int16_t a, int16_t b, int d);
extern int func_02006f10(void *p, int16_t a, int16_t b, int16_t d);
extern int func_020072e0(void *p, int a, int b, int c);
extern void func_02088f30(void);

int func_02007174(void *p, int a, int b, int c, int d)
{
    int r;

    if (func_020072c8(p, a, b, c) != 0) {
        return 1;
    }
    func_02006f5c(p, (int16_t)a, (int16_t)b, 0);
    r = func_02006f10(p, (int16_t)a, (int16_t)b, (int16_t)d);
    if (c > 0) {
        if (r != 0) {
            if (func_020072e0(p, a, b, c) == 0) {
                func_02088f30();
            }
        }
        return r;
    }
    return r;
}
