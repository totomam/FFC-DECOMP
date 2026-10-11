#include "ffc/types.h"

extern void func_020396c4(void *p);
extern void func_02036750(void *p);
extern uint8_t data_020ae940[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c0;
    uint8_t c1;
    uint8_t c2;
    uint8_t c3;
    uint8_t c4;
    uint8_t pad[0x10 - 0x0d];
} Sub;

typedef struct {
    void *vt;
    uint8_t pad0[0x88 - 4];
    uint32_t f88;
    uint32_t f8c;
    Sub s;
} Obj;

Obj *func_0203a1c4(Obj *p, uint32_t a1, uint32_t a2)
{
    Sub *s;
    func_020396c4(p);
    p->vt = data_020ae940;
    p->f88 = a1;
    p->f8c = a2;
    s = &p->s;
    s->a = 6;
    s->b = 0;
    s->c0 = 0;
    s->c1 = 0;
    s->c2 = 0;
    s->c3 = 0;
    s->c4 = 0;
    func_02036750(s + 1);
    return p;
}
