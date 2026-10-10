#include "ffc/types.h"

extern void func_02084ca4(void *a, uint32_t b, uint32_t c);

typedef uint32_t (*VFn)(void *);
typedef struct Obj {
    VFn *vt;
    uint32_t pad;
    void *f8;
} Obj;

void func_02072014(Obj *p, uint32_t b)
{
    func_02084ca4(p->f8, b, p->vt[2](p));
}
