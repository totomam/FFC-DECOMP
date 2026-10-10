#include "ffc/types.h"

extern void func_02056858(void *p);
extern uint32_t data_ov003_0217a2d4[];

typedef struct {
    void *vt;
    void *obj;
} Thing;

Thing *func_ov003_0215fa10(Thing *t)
{
    t->vt = data_ov003_0217a2d4;
    if (t->obj != 0) {
        func_02056858(t->obj);
        t->obj = 0;
    }
    return t;
}
