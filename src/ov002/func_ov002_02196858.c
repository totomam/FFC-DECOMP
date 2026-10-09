#include "ffc/types.h"

extern void *func_020558d8(void *object);
extern void func_02056db0(void *object);

void *func_ov002_02196858(void *object)
{
    func_020558d8((uint8_t *)object + 0x80);
    func_02056db0(object);
    return object;
}
