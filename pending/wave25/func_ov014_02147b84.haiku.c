#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056858(void *p);
extern uint8_t data_ov014_02155a80[];

typedef struct Obj {
    void *vtbl;
    void *f4;
    uint32_t pad[4];
    void *f18;
} Obj;

Obj *func_ov014_02147b84(Obj *p)
{
    void *v;
    p->vtbl = data_ov014_02155a80;
    v = p->f4;
    if (v != 0) {
        if (v != 0) {
            func_0205d620(v);
            func_02056844(v);
        }
        p->f4 = 0;
    }
    if (p->f18 != 0) {
        func_02056858(p->f18);
        p->f18 = 0;
    }
    return p;
}
