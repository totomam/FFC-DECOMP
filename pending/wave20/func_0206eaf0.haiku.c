#include "ffc/types.h"

typedef struct Vt {
    char pad[0x38];
    void (*fn)(void *self, int a, int b);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

extern uint32_t func_0208d5b4(void *p);
extern Obj *func_0206ea6c(void *p);
extern void func_0206e9f4(void *p);

void func_0206eaf0(void *a)
{
    uint32_t v = func_0208d5b4(a);
    Obj *o = func_0206ea6c(a);
    o->vt->fn(o, (int)(v + 2), 0);
    func_0206e9f4(a);
}
