#include "ffc/types.h"

extern void func_02052d98(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_020b1118;

void func_0205fa3c(uint32_t *p, uint32_t *a, uint32_t s, uint32_t t, uint32_t x5, uint32_t u, uint32_t w)
{
    uint32_t m = p[5];
    uint32_t c1;
    uint32_t c0 = u * m;
    uint32_t *pv;
    uint32_t v;
    uint32_t *obj;

    c1 = p[2] - t * m;
    pv = (c0 < c1) ? &c0 : &c1;
    v = *pv;
    s = s * m;
    if (m == 0x20) {
        func_02052d98(a[0], a[1], s, p[1] + t * m, v, 0);
        return;
    }
    obj = func_0205681c(8);
    if (obj != 0) {
        obj[0] = (uint32_t)&data_020b1118;
        obj[1] = w;
    }
    func_02052d98(a[0], a[1], s, p[1] + t * m, v, (uint32_t)obj);
}
