#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_ov009_021a2e7c(void *object)
{
    func_020059cc((uint8_t *)object + 0x94);
    func_02056db0(object);
    return object;
}
