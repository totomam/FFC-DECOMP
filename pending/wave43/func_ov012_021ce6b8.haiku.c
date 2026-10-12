#include "ffc/types.h"

extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov012_021d4138[];

void func_ov012_021ce6b8(void *self)
{
    uint8_t *p = (uint8_t *)self;
    int8_t s;
    uint8_t u;
    uint32_t idx;
    uint8_t *tbl;
    void *o;
    void **vt;
    void *r;

    if (*(int8_t *)(p + 0x338) < 0) {
        *(int8_t *)(p + 0x338) = 0;
    }
    u = p[0x339];
    s = *(int8_t *)(p + 0x338);
    if (s > (int8_t)u) {
        p[0x338] = u;
    }

    o = *(void **)(p + 0x2b8);
    idx = *(uint32_t *)(p + 0x2d4);
    tbl = data_ov012_021d4138 + idx * 0x90 + ((*(int8_t *)(p + 0x338)) << 3);
    vt = *(void ***)o;
    ((void (*)(void *, uint32_t, uint32_t))vt[3])(o, ((uint32_t *)tbl)[0], ((uint32_t *)tbl)[1]);

    o = *(void **)(p + 0x2b8);
    vt = *(void ***)o;
    if (*(int8_t *)(p + 0x338) < (int8_t)p[0x339]) {
        if (((int (*)(void *))vt[12])(o) != 0) {
            ((void (*)(void *))vt[10])(o);
        }
    } else {
        ((void (*)(void *))vt[11])(o);
        return;
    }

    o = *(void **)(p + 0x2b8);
    r = func_020655dc(o, 1, 0);
    func_02056bc0(p + 0x14, r);
}
