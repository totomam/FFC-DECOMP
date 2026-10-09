#include "ffc/types.h"

extern void *func_0204f45c(void *object);
extern void func_02056db0(void *object);

void *func_0200d44c(void *object)
{
    func_0204f45c((uint8_t *)object + 0x80);
    func_02056db0(object);
    return object;
}
