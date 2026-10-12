#include "ffc/types.h"

typedef struct Elem Elem;

typedef struct VT {
    void *a[4];
    int32_t (*f10)(Elem *, int32_t);
    void *b[4];
    int32_t (*f24)(Elem *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
} VT;

struct Elem {
    VT *vt;
};

typedef struct Obj {
    void *pad[6];
    Elem **items;
    uint32_t count;
} Obj;

typedef struct Tri {
    int32_t a, b, c;
} Tri;

int32_t func_02061b14(Obj *self, Tri t, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
    Elem **it;
    for (it = self->items; it != self->items + self->count; it++) {
        Elem *e = *it;
        if (e->vt->f10(e, a7)) {
            return e->vt->f24(e, t.a, t.b, t.c, a4, a5, a6, a7);
        }
    }
    return 0;
}
