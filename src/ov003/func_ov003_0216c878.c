#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_0217b35c[];

typedef struct Obj {
    void *vt;
    uint32_t pad[31];
    void *link;
} Obj;

void *func_ov003_0216c878(uint32_t *p)
{
    Obj *r4 = (Obj *)func_0205681c(0x84);
    if (r4 != 0) {
        func_02056c9c(r4, 0);
        r4->vt = data_ov003_0217b35c;
        r4->link = p;
        p[3] = (p[3] & ~0xffu) | 1u;
    }
    return r4;
}
