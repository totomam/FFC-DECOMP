#include "ffc/types.h"

typedef struct Inner {
    uint32_t w0;
    uint32_t w1;
} Inner;

typedef struct Obj {
    struct Obj *child0;
    struct Obj *child1;
    uint32_t pad[1];
    Inner in;
} Obj;

extern void func_ov003_0215bd00(void *a, Obj *p);
extern void func_0202984c(void *p);
extern void func_02056844(Obj *p);

void func_ov003_0215bd00(void *a, Obj *p)
{
    if (p->child0 != 0) {
        func_ov003_0215bd00(a, p->child0);
    }
    if (p->child1 != 0) {
        func_ov003_0215bd00(a, p->child1);
    }
    func_0202984c((void *)((uint32_t)&p->in + 4));
    func_02056844(p);
}
