#include "ffc/types.h"

extern void *func_02050c28(void *object);
extern void func_02056db0(void *object);

void *func_ov003_0215c16c(void *object)
{
    func_02050c28((uint8_t *)object + 0x8c);
    func_02056db0(object);
    return object;
}
