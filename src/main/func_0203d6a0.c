#include "ffc/types.h"

extern void *func_0200958c(void *object);
extern void func_02046f9c(void *object);

void *func_0203d6a0(void *object)
{
    func_0200958c((uint8_t *)object + 0x98);
    func_02046f9c(object);
    return object;
}
