#include "ffc/types.h"

extern void *func_ov009_0219a484(void *object);
extern void func_02056db0(void *object);

void *func_ov009_0219a530(void *object)
{
    func_ov009_0219a484((uint8_t *)object + 0x94);
    func_02056db0(object);
    return object;
}
