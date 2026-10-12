/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint8_t data_020ae644[];
extern uint8_t data_020ae654[];
extern void func_02035fd0(void *object);
}

struct P { uint32_t v; void *vt; };
struct Q { void *vt; uint32_t a, b; };
struct Arr { uint16_t v[17]; };
struct Frame {
    P p[5];
    uint32_t a, b;
    Arr arr;
    uint32_t f54, f58, f5c;
};
struct Cls;
typedef void (Cls::*Fn)(Frame *, uint8_t);
struct Hold { Fn fn; };
struct Obj {
    uint8_t pad0[0xc]; uint32_t flags;
    uint8_t pad1[0x74];
    Cls *target;
    uint32_t fnraw[2];
    uint32_t s90, pad94, s98, pad9c, sa0, pada4, sa8, padac, sb0, padb4, sb8, sbc;
    Arr arr;
    uint8_t padE2[2];
    uint32_t se4, se8, sec;
    uint8_t sf0;
};

extern "C" void func_ov009_0219d3d8(Obj *a)
{
    Frame f;
    f.p[0].v = a->s90; f.p[0].vt = data_020ae644;
    f.p[1].v = a->s98; f.p[1].vt = data_020ae644;
    f.p[2].v = a->sa0; f.p[2].vt = data_020ae644;
    f.p[3].v = a->sa8; f.p[3].vt = data_020ae644;
    f.p[4].v = a->sb0;
    Q *q = (Q*)&f.p[4].vt;
    q->vt = data_020ae644;
    q->a = a->sb8;
    q->vt = data_020ae654;
    q->b = a->sbc;
    f.arr = a->arr;
    f.f54 = a->se4;
    Hold *h = (Hold*)a->fnraw;
    f.f58 = a->se8;
    uint32_t one = 1;
    f.f5c = a->sec;
    Cls *t = a->target;
    Frame *pf = &f;
    
    (t->*(h->fn))(pf, a->sf0);
    func_02035fd0(&f);
    a->flags = (a->flags & ~0xffu) | 2u;
}
