#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov002_021c5634(uint8_t *p)
{
    uint32_t *obj;
    uint32_t *vt;

    func_02021338(0xd0);
    obj = *(uint32_t **)(p + 0xbc);
    vt = *(uint32_t **)obj;
    ((void (*)(void *))vt[10])(obj);
    obj = *(uint32_t **)(p + 0xb8);
    vt = *(uint32_t **)obj;
    ((void (*)(void *))vt[10])(obj);
}
