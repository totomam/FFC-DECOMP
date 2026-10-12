#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t data_020b8e44;
extern uint32_t func_02015938(uint32_t x);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern int32_t data_ov004_02157e84[];

struct Pair {
    int32_t a;
    int32_t b;
};

typedef void (*VF3)(void *self, struct Pair pr);

struct Obj {
    uint8_t p0[0x12];
    uint8_t flag;
    uint8_t p1;
    uint32_t w14;
    uint32_t p2;
    uint32_t sub[2];
};

struct D8 {
    void **vt;
    uint32_t a4;
    uint32_t a8;
    uint32_t wc;
};

struct P {
    uint32_t pad[0x31];
    struct Obj *c4;
    struct Obj *c8;
    void *cc;
    uint32_t *d0;
    uint32_t d4;
    struct D8 *d8;
    uint32_t dc;
    uint32_t e0;
};

void func_ov004_02147c20(struct P *p)
{
    struct Obj *o;
    uint8_t f;
    void *s;
    int r4;
    uint32_t r6;
    int32_t diff;
    struct Pair n2;
    struct Pair n1;
    struct Pair pr1;
    struct Pair pr2;

    if (p->e0 != 0) {
        p->e0 = p->e0 - 1;
        if (p->e0 == 0) {
            o = p->c8;
            f = o->flag;
            s = o->sub;
            if (f) func_0208763c(s);
            r4 = (o->w14 == 0);
            if (f) func_02087678(s);
            if (r4 == 0) {
                o = p->c4;
                f = o->flag;
                s = o->sub;
                if (f) func_0208763c(s);
                r4 = (o->w14 == 0);
                if (f) func_02087678(s);
                if (r4 != 0) {
                    p->d8->wc &= ~0xffu;
                }
            }
        }
    }

    if (p->dc != 0) {
        p->dc = p->dc - 1;
        o = p->c8;
        f = o->flag;
        s = o->sub;
        if (f) func_0208763c(s);
        r4 = (o->w14 == 0);
        if (f) func_02087678(s);
        if (r4 == 0) {
            o = p->c4;
            f = o->flag;
            s = o->sub;
            if (f) func_0208763c(s);
            r4 = (o->w14 == 0);
            if (f) func_02087678(s);
            if (r4 != 0) {
                uint32_t *dp = &data_020b8e44;
                r6 = p->dc;
                r4 = func_0206c184(func_02015938(*dp), r6 * 2 + 1) - r6;
                diff = func_0206c184(func_02015938(*dp), (((int32_t)r6 << 1) + 1)) - p->dc;
                pr1.a = data_ov004_02157e84[10] + diff;
                pr1.b = data_ov004_02157e84[11] + r4;
                pr2.a = diff;
                pr2.b = r4;
                ((VF3)p->d8->vt[3])(p->d8, pr1);
                ((VF3)((void **)p->cc)[3])(p->cc, pr2);
                {
                    n1.a = -pr2.a; n1.b = -pr2.b;
                    n2 = n1;
                    p->d0[0xd] = n1.a;
                    p->d0[0xe] = n1.b;
                }
            }
        }
    }
}
