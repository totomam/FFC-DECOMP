#include "ffc/types.h"

extern void func_02042b18(void *p, int x);
extern void func_02037544(void);
extern void func_0203755c(void);
extern void func_02037574(void);
extern void func_0203758c(void);

void func_02046fbc(uint8_t *self)
{
    void *obj;

    func_02042b18(*(void **)(self + 0x80), 0);
    switch (*(uint32_t *)(self + 0x84)) {
    case 0:
    case 1:
        break;
    case 2:
        func_02037544();
        break;
    case 3:
        func_0203755c();
        break;
    case 4:
        func_02037574();
        break;
    case 5:
        func_0203758c();
        break;
    }

    obj = ((void *(*)(void *))(*(void ***)self)[4])(self);
    *(void **)(self + 0x8c) = obj;
    if ((int8_t)*(int32_t *)((uint8_t *)obj + 0xc) == 0) {
        ((void (*)(void *))(*(void ***)obj)[2])(obj);
    }
    obj = *(void **)(self + 0x8c);
    if ((int8_t)*(int32_t *)((uint8_t *)obj + 0xc) == 0) {
        ((void (*)(void *))(*(void ***)obj)[2])(obj);
    }
}
