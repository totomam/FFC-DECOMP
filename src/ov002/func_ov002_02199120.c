#include "ffc/types.h"

extern void *func_020558d8(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_ov002_02199120(void *p)
{
    func_020558d8((uint8_t *)p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
