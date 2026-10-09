#include "ffc/types.h"

extern void *func_0200a678(void *object);
extern void func_02056db0(void *object);

void *func_0200cd14(void *object)
{
    func_0200a678((uint8_t *)object + 0x84);
    func_02056db0(object);
    return object;
}
