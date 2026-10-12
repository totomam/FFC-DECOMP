#include "ffc/types.h"

typedef struct Obj {
    struct Obj *next;   /* 0x00 */
    uint32_t f04;       /* 0x04 */
    struct Obj *child;  /* 0x08 */
    uint32_t f0c;       /* 0x0c */
    uint32_t f10;       /* 0x10 */
    uint32_t state;     /* 0x14 */
} Obj;

extern void func_02088f30(uint32_t);
extern void func_0207dc60(Obj *, int);
extern uint32_t func_02088978(uint32_t);
extern void func_0208898c(uint32_t);
extern int func_0207df24(Obj *, int);
extern void func_0207e094(Obj *);
extern void func_0207e040(Obj *);

int func_0207e0f4(Obj *a, uint32_t r1, int c)
{
    Obj *p;
    uint32_t t;
    uint32_t bit;
    uint32_t f;
    int flag;
    int ret = 0;
    int rr;

    f = a->f0c;
    bit = 1;
    if (!(f & bit)) {
        bit = 0;
    }
    if (bit) {
        func_02088f30(f);
    }
    p = a->child;

    if (p == 0) {
        a->state = 6;
        return 0;
    }

    a->state = 2;
    a->f0c = 1u | ((r1 << 8) | (0xffff00ffu & a->f0c));
    a->next = 0;
    if (c) {
        a->f0c |= 4u;
    }

    t = func_02088978(a->f0c);

    if (p->state & 0x80) {
        func_0207dc60(a, 3);
    } else {
        Obj *q = p->child;
        if (q) {
            while (q->next) {
                q = q->next;
            }
            q->next = a;
        } else {
            p->child = a;
        }
    }

    flag = (p->child == a && !(p->state & 0x10));

    func_0208898c(t);

    if (a->state != 3) {
        rr = func_0207df24(p, flag);
        if (c) {
            func_0207e094(a);
            ret = (a->state == 0);
        } else {
            if (rr) {
                func_0207e040(a);
            }
            ret = 1;
        }
    }
    return ret;
}
