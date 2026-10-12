#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0206133c(uint32_t object);
extern char data_ov002_021d70f8[];
extern uint32_t data_020b8e44;

void *func_ov002_021c295c(void *obj)
{
    uint32_t *w = (uint32_t *)obj;
    uint32_t *a;
    uint32_t *q;
    uint32_t i;
    uint32_t v;
    uint32_t r;

    func_02056c9c(obj, 0);
    *(void **)obj = data_ov002_021d70f8;
    a = w + (0x80 / 4);
    i = 0;
    v = i;
    do {
        a[i] = v;
        i++;
    } while (i < 3);
    w[0x8c / 4] = v;
    w[0x90 / 4] = v;
    w[0x94 / 4] = v;
    w[0x98 / 4] = v;
    w[0x9c / 4] = v;
    w[0xa0 / 4] = v;
    q = w + (0xa0 / 4);
    w[0xac / 4] = v;
    q[1] = v;
    q[2] = v;
    r = func_02015a38(data_020b8e44, v, 10, v);
    w[0xac / 4] = r;
    func_0206133c(r);
    return obj;
}
