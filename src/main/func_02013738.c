#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056844(void *object);

void *func_02013738(void *object)
{
    func_02035fd0((uint8_t *)object + 0x1c);
    func_02056844(object);
    return object;
}
