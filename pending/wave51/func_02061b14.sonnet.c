#include "ffc/types.h"

typedef struct Elem Elem;
typedef struct P { int32_t a, b; } P;
typedef struct T { int32_t a, b, c; } T;

typedef struct VT {
    void *a[4];
    int32_t (*f10)(Elem *, int32_t);
    void *b[4];
    int32_t (*f24)(Elem *, int32_t, T, P, int32_t);
} VT;

struct Elem { VT *vt; };

typedef struct Obj {
    void *pad[6];
    Elem **items;
    uint32_t count;
} Obj;

int32_t func_02061b14(Obj *self, int32_t a1, T t, P q, int32_t a8)
{
    Elem **it;
    for (it = self->items; it != self->items + self->count; it++) {
        Elem *e = *it;
        if (e->vt->f10(e, a8)) {
            return e->vt->f24(e, a1, t, q, a8);
        }
    }
    return 0;
}
