#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_ov003_0216398c(void *object)
{
    func_020059cc((uint8_t *)object + 0x90);
    func_02056db0(object);
    return object;
}
