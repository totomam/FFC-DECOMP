#include "ffc/types.h"

extern uint32_t func_02005dc0(void *object);
extern uint32_t func_02005dc8(void *object);
extern void func_ov007_021ae1bc(void *object);
extern void func_02005db4(void *object, uint32_t value);
extern void func_02005dac(void *object);
extern void func_ov007_021ae044(void *object);

typedef struct {
    uint32_t pad[5];
    void *x14;
    void *x18;
    uint32_t x1c;
} Obj;

void func_ov007_021ae1f8(Obj *o)
{
    uint32_t v;
    void *a;

    if (func_02005dc0(o->x18) == 0) {
        return;
    }
    v = func_02005dc8(o->x18);
    if (o->x1c == v) {
        return;
    }
    a = o->x14;
    o->x1c = v;
    func_ov007_021ae1bc(a);
    if (o->x1c == 0) {
        func_02005db4(o->x18, 0);
        func_02005dac(o->x18);
        func_ov007_021ae044(o->x14);
    }
}
