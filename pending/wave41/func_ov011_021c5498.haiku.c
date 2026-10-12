#include "ffc/types.h"

typedef struct Vt {
    void *slot[16];
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056bf4(void *p);
extern Obj *func_0203bb94(void *d, int a, int b, int c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cb604[];
extern Pair data_ov011_021cb454[];

void func_ov011_021c5498(uint8_t *p)
{
    Obj *o;
    Obj *t;
    Obj *q;
    Pair *pp;
    uint32_t idx;

    t = *(Obj **)(p + 0xe4);
    if (t) {
        func_02056bf4(p + 0x48);
        t = *(Obj **)(p + 0xe4);
        if (t) {
            if (t) {
                ((void (*)(Obj *))t->vt->slot[1])(t);
            }
            *(Obj **)(p + 0xe4) = 0;
        }
    }

    o = func_0203bb94(data_ov011_021cb604, 1, 0, 0);
    *(Obj **)(p + 0xe4) = o;
    ((void (*)(Obj *))o->vt->slot[10])(o);
    ((void (*)(Obj *, int))(*(Obj **)(p + 0xe4))->vt->slot[8])(*(Obj **)(p + 0xe4), 2);
    idx = *(uint8_t *)(p + 0x117);
    q = *(Obj **)(p + 0xe4);
    pp = data_ov011_021cb454 + idx;
    ((void (*)(Obj *, uint32_t, uint32_t))q->vt->slot[3])(q, pp->a, pp->b);
    func_02056bc0(p + 0x48, *(Obj **)(p + 0xe4));
}
