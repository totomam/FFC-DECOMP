#include "ffc/types.h"

extern uint8_t data_ov009_021b0014[];
extern void func_02056c4c(void *p);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);

void *func_ov009_0219d93c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *obj;

    *(void **)self = (void *)data_ov009_021b0014;
    func_02056c4c(self + 0x14);

    obj = *(void **)(self + 0x8c);
    if (obj) {
        if (obj) {
            void **vt = *(void ***)obj;
            ((void (*)(void *))vt[1])(obj);
        }
        *(void **)(self + 0x8c) = 0;
    }

    func_02035fd0(self + 0x118);
    func_02056db0(self);
    return self;
}
