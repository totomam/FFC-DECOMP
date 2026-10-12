#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02057c28(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205833c(void *p, uint32_t a, uint32_t b);
extern void func_0204f180(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_020b0d84[];
extern uint8_t data_0209f3a0[];

void *func_0205908c(uint32_t *obj, uint32_t r1, uint32_t r2, uint32_t r3,
                    uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7,
                    uint32_t s8, uint32_t s9, uint32_t s10, uint32_t s11,
                    uint32_t s12, uint32_t s13, uint32_t s14, uint32_t s15)
{
    uint32_t *w;
    uint32_t *q;
    uint32_t i;
    void *t;

    obj[3] = r1;
    obj[0] = (uint32_t)data_020b0d84;
    obj[18] = s14;
    obj[19] = s15;
    *((uint8_t *)obj + 0x54) = 0;
    obj[2] = (uint32_t)data_0209f3a0;
    func_0204f180(obj[3], 0, 0, 0, 0);

    t = func_0205681c(0x3c);
    if (t != 0) {
        t = func_02057c28(t, r2, r3, 16);
    }
    obj[4] = (uint32_t)t;

    t = func_0205681c(0x4c);
    if (t != 0) {
        t = func_0205833c(t, s4, 0);
    }
    obj[13] = (uint32_t)t;

    for (i = 0; i < 4; i++) {
        obj[5 + i] = 0;
    }
    for (i = 0; i < 4; i++) {
        obj[9 + i] = 0;
    }

    w = &s5;
    i = 0;
    while (i < 4 && (q = w + 2 * i)[1] != 0) {
        t = func_0205681c(0x4c);
        if (t != 0) {
            t = func_0205833c(t, q[2], q[1]);
        }
        obj[14 + i] = (uint32_t)t;
        i++;
    }
    obj[20] = i;
    while (i < 4) {
        obj[14 + i] = 0;
        i++;
    }
    return obj;
}
