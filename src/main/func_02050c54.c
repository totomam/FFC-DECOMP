#include "ffc/types.h"

extern void *func_02050c28(void *object);
extern void func_02056844(void *object);

void *func_02050c54(void *object)
{
    func_02050c28((uint8_t *)object + 0xc);
    func_02056844(object);
    return object;
}
