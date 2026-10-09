#include "ffc/types.h"

extern void *func_02050c28(void *object);

void *func_02050c44(void *object)
{
    func_02050c28((uint8_t *)object + 0xc);
    return object;
}
