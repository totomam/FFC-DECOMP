#include "ffc/types.h"

extern void func_020692a4(void *object);

void func_ov005_02198ad0(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    void *obj;
    void **vt;

    func_020692a4(*(void **)(p + 0x120));
    obj = *(void **)(*(uint8_t **)(p + 0x120) + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    func_020692a4(*(void **)(p + 0x124));
    obj = *(void **)(*(uint8_t **)(p + 0x124) + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);
}
