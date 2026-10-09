#include "ffc/types.h"

extern void *func_02054844(void *object);
extern void func_02054c90(void *object);

void *func_020217e4(void *object)
{
    func_02054844((uint8_t *)object + 0xc);
    func_02054c90(object);
    return object;
}
