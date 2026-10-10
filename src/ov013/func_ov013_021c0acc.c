#include "ffc/types.h"

extern void func_020692a4(void *object);

void func_ov013_021c0acc(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    p[0xcd] = 0;
    if (p[0xcc]) {
        func_020692a4(*(void **)(p + 0xc0));
    }
}
