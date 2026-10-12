#include "ffc/types.h"

extern uint8_t data_020b19d4[];
extern void func_02061344(void *object);
extern void *func_0200a678(void *object);
extern void func_02062868(void *object);
extern void func_02056844(void *object);

void *func_020684d0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *o;
    void **vt;

    *(uint8_t **)p = data_020b19d4;
    func_02061344(*(void **)(p + 0x20));

    o = *(void **)(p + 0x1c);
    if (o != 0) {
        vt = *(void ***)o;
        ((void (*)(void *))vt[1])(o);
    }

    o = *(void **)(p + 0x58);
    if (o != 0) {
        vt = *(void ***)o;
        ((void (*)(void *))vt[1])(o);
    }

    func_0200a678(p + 0x4c);
    func_02062868(p);
    func_02056844(p);
    return p;
}
