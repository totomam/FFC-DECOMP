#include "ffc/types.h"

typedef struct Obj {
    void (**vt)(void *);
    uint32_t pad4;
    uint32_t pad8;
    uint32_t flags;
} Obj;

void func_02056924(Obj *p) {
    (*(p->vt + 3))(p);
    p->flags = (p->flags & 0xffffff00u) | 2u;
}
