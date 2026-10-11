#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *p, uint32_t v);
extern void *func_ov003_02168084(void *obj, void *a, uint32_t b, void *local, uint32_t d);
extern void *func_020059cc(void *object);

void *func_ov003_02168040(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t local[3];
    void *obj;
    int flag = 0;

    obj = func_0205681c(0x4c);
    if (obj != 0) {
        func_020095b8(local, c);
        flag = 1;
        obj = func_ov003_02168084(obj, a, b, local, d);
    }
    if (flag) {
        func_020059cc(local);
    }
    return obj;
}
