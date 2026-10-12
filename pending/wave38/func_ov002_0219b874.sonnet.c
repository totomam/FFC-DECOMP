#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);

typedef struct V { void *f0; void (*f4)(void *); void *pad[11]; void (*f38)(void *, int, int); } V;
typedef struct O { V *vt; } O;
typedef struct S {
    uint8_t pad[0x48];
    uint8_t list[0xE0];
    O *p0;
    O *p1;
} S;

void func_ov002_0219b874(S *self, O *a, O *b)
{
    O *y = b;
    O *x = a;
    if (self->p0 != 0) {
        if (x != 0) { if (x != 0) x->vt->f4(x); }
        if (y != 0) { if (y != 0) y->vt->f4(y); }
        return;
    }
    self->p0 = a;
    self->p1 = b;
    a->vt->f38(a, 2, 0);
    {
    O *q = self->p1;
    O *p = self->p0;
    func_02056bc0(self->list, p);
    func_02056bc0(self->list, q);
    }
}
