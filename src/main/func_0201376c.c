#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056844(void *object);

void *func_0201376c(void *object)
{
    func_02035fd0((uint8_t *)object + 0x20);
    func_02056844(object);
    return object;
}
