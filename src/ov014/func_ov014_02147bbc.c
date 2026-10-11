#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056858(void *p);
extern uint32_t data_ov014_02155a80[];

typedef struct {
    uint32_t *vt;
    void *f4;
    uint8_t pad[0x10];
    void *f18;
} Obj;

void *func_ov014_02147bbc(void *self)
{
    Obj *p = (Obj *)self;
    void *a;

    p->vt = data_ov014_02155a80;
    a = p->f4;
    if (a != 0) {
        if (a != 0) {
            func_0205d620(a);
            func_02056844(a);
        }
        p->f4 = 0;
    }
    if (p->f18 != 0) {
        func_02056858(p->f18);
        p->f18 = 0;
    }
    func_02056844(p);
    return p;
}
