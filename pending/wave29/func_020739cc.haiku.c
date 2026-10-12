#include "ffc/types.h"

extern uint8_t data_020b24e0[];
extern uint32_t data_0213e1cc[];
extern uint8_t data_020b2468[];
extern uint32_t func_02056830(int32_t v);

typedef struct Obj {
    void *vt;
    uint32_t a4;
    uint32_t a8;
    uint32_t c;
    uint32_t d10;
    uint32_t r14;
    uint32_t r18;
    uint8_t r1c;
    uint32_t r20;
    uint32_t r24;
    uint32_t r28;
    uint32_t r2c;
    uint32_t r30;
    uint32_t r34;
} Obj;

Obj *func_020739cc(Obj *p, uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4s)
{
    uint32_t *base = data_0213e1cc;
    uint32_t idx = 3;
    p->vt = data_020b24e0;
    p->c &= 0xffffff00;
    p->r14 = a1;
    p->r1c = 1;
    p->r18 = idx;
    p->r20 = 0;
    p->r24 = 0;
    base[idx] = 9;
    p->r28 = a2;
    p->vt = data_020b2468;
    p->r2c = a3;
    p->r30 = a4s;
    p->r34 = 0;
    if (a4s < 0x80) {
        a4s = 0x80;
    }
    p->r34 = func_02056830(a4s);
    return p;
}
