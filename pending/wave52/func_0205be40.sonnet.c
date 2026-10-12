#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    uint32_t cnt;
} S;

extern uint32_t data_0213e114;
extern uint32_t data_020b0e30;
extern void func_0205bee8(S *s, uint32_t a);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_0205be40(S *s, uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t r4;
    uint32_t r5;
    uint32_t g, f, c;

    f = data_0213e114;
    if (!(f & 1)) {
        data_020b0e30 = 0x3ffffffe;
        data_0213e114 = f | 1;
    }
    c = s->cnt;
    r5 = 0;
    r4 = data_020b0e30;
    if (c != 0) r5 = c - 1;
    if (a1 > r4 - r5) {
        func_0205bee8(s, a1);
    }
    g = func_0209a978(r4, 3);
    if (r5 < g) {
        uint32_t t = func_0209a978(3 * (r5 + 1), 5);
        uint32_t *p = (t < a1) ? &a1 : &t;
        return r5 + *p;
    }
    if (r5 < g * 2) {
        uint32_t u = (r5 + 1) >> 1;
        uint32_t *p = (u < a1) ? &a1 : &u;
        return r5 + *p;
    }
    return r4;
}
