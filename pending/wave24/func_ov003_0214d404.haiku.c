#include "ffc/types.h"

extern void *data_020b93b8;
extern void *func_0201b79c(void *);

void func_ov003_0214d404(uint8_t *p) {
    void *a = func_0201b79c(data_020b93b8);
    void **obj = *(void ***)(p + 0x80);
    ((void (*)(void *, void *))((void **)*obj)[5])(obj, a);

    obj = *(void ***)(p + 0x80);
    void **y = *(void ***)((uint8_t *)obj + 0x188);
    int32_t v = *(int32_t *)((uint8_t *)y + 0xc);
    if ((int8_t)v == 0) {
        ((void (*)(void *))((void **)*y)[2])(y);
    }
}
