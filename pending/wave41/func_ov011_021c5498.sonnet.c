#include "ffc/types.h"
typedef struct Vt { void *slot[16]; } Vt;
typedef struct Obj { Vt *vt; } Obj;
typedef struct Pair { uint32_t a; uint32_t b; } Pair;
typedef struct P {
    uint8_t pad0[0x48];
    uint8_t list[0x9c];
    Obj *child;
    uint8_t pad1[0x2f];
    uint8_t idx;
} P;
extern void func_02056bf4(void *p);
extern Obj *func_0203bb94(void *d, int a, int b, int c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cb604[];
extern Pair data_ov011_021cb454[];

void func_ov011_021c5498(P *p)
{
    Obj *o;
    Obj *q;
    Pair v;

    if (p->child) {
        func_02056bf4(p->list);
        if (p->child) {
            q = p->child;
            if (q) {
                ((void (*)(Obj *))q->vt->slot[1])(q);
            }
            p->child = 0;
        }
    }
    o = func_0203bb94(data_ov011_021cb604, 1, 0, 0);
    p->child = o;
    ((void (*)(Obj *))o->vt->slot[10])(o);
    ((void (*)(Obj *, int))p->child->vt->slot[8])(p->child, 2);
    v = data_ov011_021cb454[p->idx];
    q = p->child;
    ((void (*)(Obj *, Pair))q->vt->slot[3])(q, v);
    func_02056bc0(p->list, p->child);
}
