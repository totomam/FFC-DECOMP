#include "ffc/types.h"

extern void *func_02054844(void *object);
extern void func_02056844(void *object);

void *func_0204fa28(void *object)
{
    func_02054844((uint8_t *)object + 0x14);
    func_02056844(object);
    return object;
}
