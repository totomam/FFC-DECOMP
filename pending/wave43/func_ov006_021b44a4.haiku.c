#include "ffc/types.h"

typedef struct Pair { uint8_t a; uint8_t b; } Pair;

extern void func_020793bc(void *p, void *r1, uint32_t r2, uint32_t r3, uint32_t s0, uint32_t s1, Pair pr);

typedef struct Rec { uint8_t pad[7]; uint8_t mode; } Rec;
typedef struct Mid { uint32_t a; uint32_t b; Rec *rec; } Mid;
typedef struct Outer { Mid *m; } Outer;
typedef struct Top { uint8_t pad[0x1c]; Outer *o; } Top;

void func_ov006_021b44a4(Top *t, void *r1, uint32_t r2, uint32_t r3, uint32_t s0, uint32_t s1)
{
    Pair buf;
    Pair *p;
    Pair pr;
    uint8_t *q;
    Outer *o;

    o = t->o;
    p = &buf;
    p->a = 0;
    p->b = 0;
    q = (uint8_t *)&buf;
    switch (o->m->rec->mode) {
    case 0:
    case 7:
        q[0] = 1;
        break;
    case 1:
    case 2:
        q[1] = 1;
        break;
    case 3:
    case 4:
        q[0] = (uint8_t)(0 - 1);
        break;
    case 5:
    case 6:
        q[1] = (uint8_t)(0 - 1);
        break;
    default:
        break;
    }
    pr = buf;
    func_020793bc((uint8_t *)t + 0x18, r1, r2, r3, s0, s1, pr);
}
