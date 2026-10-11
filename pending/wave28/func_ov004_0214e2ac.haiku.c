#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern void *func_02056dd4(void *x);
extern void func_0206047c(void *x);
extern void func_02060e80(void *object);
extern void func_01ffd020(void *x);

void func_ov004_0214e2ac(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint8_t *obj = *(uint8_t **)(p + 0xa8);

    if (obj != 0) {
        func_02056c4c(*(void **)(obj + 0x94));
        func_0206047c(*(void **)((uint8_t *)func_02056dd4(obj) + 0x20));
        func_02060e80(*(void **)((uint8_t *)func_02056dd4(obj) + 0x24));
        {
            void *o = *(void **)(obj + 0x88);
            ((void (**)(void *))(*(void **)o))[11](o);
        }
    }
    func_01ffd020(*(void **)(p + 0x90));
}
