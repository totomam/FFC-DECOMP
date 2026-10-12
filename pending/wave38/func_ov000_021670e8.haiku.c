#include "ffc/types.h"

extern uint32_t *func_ov000_02166414(uint32_t a);
extern int func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern int func_ov000_0216888c(uint32_t a, void *s, int (*cb)(void), uint32_t c, uint32_t e);
extern uint32_t *func_ov000_0216876c(uint32_t a);
extern int func_ov001_0218082c(uint32_t a);
extern int func_ov000_02166444(void);
extern char data_ov000_0216b7fc[];

int func_ov000_021670e8(uint32_t a, uint16_t b)
{
    uint32_t *p;
    struct {
        uint32_t x;
        uint32_t y;
        uint32_t z;
    } s;
    int r;
    int zero;

    p = func_ov000_02166414(a);
    if (p[3] == 0) {
        func_ov000_021652a8(0xc, 0, 0xf, data_ov000_0216b7fc);
        return 0;
    }
    s.x = a;
    *(uint16_t *)&s.y = b;
    zero = 0;
    r = func_ov000_0216888c(p[1], &s, func_ov000_02166444, 0, zero);
    if (r == zero - 1) {
        return zero;
    }
    return func_ov001_0218082c(func_ov000_0216876c(p[1])[2]);
}
