#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_ov009_0219d548(void *p)
{
    func_02035fd0((uint8_t *)p + 0x90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
