#include "ffc/types.h"

extern char data_ov009_021b0014[];
extern void func_02056c4c(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_ov009_0219d980(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *x;

    *(char **)self = data_ov009_021b0014;
    func_02056c4c(self + 0x14);
    x = *(void **)(self + 0x8c);
    if (x != 0) {
        if (x != 0) {
            ((void (*)(void *))(*(void ***)x)[1])(x);
        }
        *(void **)(self + 0x8c) = 0;
    }
    func_02035fd0(self + 0x118);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
