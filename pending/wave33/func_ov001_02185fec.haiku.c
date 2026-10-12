#include "ffc/types.h"

extern void *func_ov001_02185fac(uint32_t idx, uint32_t size);
extern int func_ov001_02185f74(void *p);
extern int func_ov001_02185448(void *p);
extern void func_ov001_02185df4(void *a, void *p, void *d);
extern uint8_t data_ov001_0219423c[];

void func_ov001_02185fec(void *a, uint32_t b)
{
    void *p;
    void *q;
    void *d;

    p = func_ov001_02185fac(b + 1, 0x5c);
    if (p == 0) {
        return;
    }
    do {
        q = func_ov001_02185fac(0, 0x5c);
        d = q;
        if (q == 0) {
            d = data_ov001_0219423c;
        }
        if (func_ov001_02185f74(p) != 0 && func_ov001_02185448(p) == 0) {
            func_ov001_02185df4(a, p, d);
        }
        p = func_ov001_02185fac(0, 0x5c);
    } while (p != 0);
}
