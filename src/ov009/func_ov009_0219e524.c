#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_02056db0(void *object);

void *func_ov009_0219e524(void *object)
{
    func_02035fd0((uint8_t *)object + 0x84);
    func_02056db0(object);
    return object;
}
