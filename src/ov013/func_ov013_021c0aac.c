#include "ffc/types.h"

extern void func_02069288(void *object);

void func_ov013_021c0aac(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    p[0xcd] = 1;
    if (p[0xcc]) {
        func_02069288(*(void **)(p + 0xc0));
    }
}
