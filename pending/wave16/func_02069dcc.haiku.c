#include "ffc/types.h"

typedef struct Obj {
    void (**vt)(void);
} Obj;

void func_02069dcc(Obj *a, Obj *b) {
    ((void (*)(Obj *))b->vt[10])(b);
    ((void (*)(Obj *, Obj *))a->vt[9])(a, b);
}
