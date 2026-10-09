#include "ffc/types.h"

extern void *func_0200958c(void *object);
extern void func_02046f9c(void *object);
extern void func_02056844(void *object);

void *func_0203d6b4(void *p)
{
    func_0200958c((uint8_t *)p + 0x98);
    func_02046f9c(p);
    func_02056844(p);
    return p;
}
