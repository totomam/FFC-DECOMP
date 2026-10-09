#include "ffc/types.h"

extern void *func_020367a8(void *object);
extern void func_02039738(void *object);

void *func_0203b2c0(void *object)
{
    func_020367a8((uint8_t *)object + 0xa0);
    func_02039738(object);
    return object;
}
