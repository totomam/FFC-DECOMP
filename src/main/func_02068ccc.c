#include "ffc/types.h"

extern uint8_t data_020b1a30[];
extern void func_02061344(void *obj);
extern void *func_0200a678(void *object);
extern void func_0206903c(void *obj);
extern void func_02062868(void *obj);

void *func_02068ccc(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *o;
    *(void **)p = (void *)data_020b1a30;
    o = *(void **)(p + 0x1c);
    if (o != 0) {
        void **vt = *(void ***)o;
        ((void (*)(void *))vt[1])(o);
    }
    func_02061344(*(void **)(p + 0x20));
    func_0200a678(p + 0x40);
    func_0206903c(p + 0x34);
    func_0206903c(p + 0x28);
    func_02062868(p);
    return self;
}
