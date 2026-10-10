#include "ffc/types.h"

typedef struct VT { uint8_t pad[0x4c]; int (*fn)(void *, int, int, int); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct P { uint8_t pad[0x1c]; Obj *inner; int dx; int dy; } P;

int func_02065ecc(P *p, int x, int y, int z) {
    return p->inner->vt->fn(p->inner, x + p->dx, y + p->dy, z);
}
