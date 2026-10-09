#include "ffc/types.h"

extern void *func_0200958c(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0203d3b4(void *p)
{
    func_0200958c((uint8_t *)p + 0x8c);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
