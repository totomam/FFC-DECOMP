#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void func_02015e8c(void *obj, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern char data_ov002_021d68c8[];
extern uint32_t data_020b8e44;
extern char data_ov002_021d68b0[];

typedef struct { uint32_t f0; void *f4; uint32_t f8; uint8_t f12; } Loc;
typedef struct { uint32_t a, b; } Pair;
typedef struct { void *vt; uint8_t pad[0x44]; uint8_t list[0x38]; void *kids[2]; } Obj;
typedef struct { void *vt; uint8_t pad[0x44]; uint8_t list[0x38]; void *node; uint32_t a, b; } Kid;

void *func_ov002_021bc15c(Obj *a)
{
    Loc loc;
    int i;
    Kid *obj;
    uint8_t *list;
    volatile int off;
    int made;
    Loc *lp = &loc;

    func_02056c9c(a, 0);
    a->vt = data_ov002_021d68c8;
    list = a->list;
    for (i = 0; i < 2; i++) {
        made = 0;
        obj = func_0205681c(0x8c);
        if (obj != 0) {
            uint8_t *m;
            func_02015e8c(&loc, data_020b8e44);
            made = 1;
            m = func_02052d90(loc.f4, loc.f8);
            m = m + *(uint32_t *)(m + 0x148);
            volatile Pair q;
            Pair p = ((Pair *)m)[i];
            q.a = p.a; q.b = p.b;
            func_02056c9c(obj, 0);
            obj->vt = data_ov002_021d68b0;
            obj->a = q.a;
            obj->b = q.b;
            obj->node = func_0203b6f0();
            func_02056bc0(obj->list, obj->node);
        }
        off = i * 4;
        *(void **)((uint8_t *)a->kids + off) = obj;
        if (made) {
            if (lp->f4 != 0) {
                if (lp->f12) {
                    func_02052d3c(lp->f4, lp->f8);
                }
                func_02052c04(lp->f4);
            }
            func_02053290(lp);
        }
        func_02056bc0(list, *(void **)((uint8_t *)a->kids + off));
    }
    return a;
}
