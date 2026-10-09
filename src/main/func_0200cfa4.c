#include "ffc/types.h"

extern void *func_0200a678(void *object);
extern void func_02056db0(void *object);

void *func_0200cfa4(void *object)
{
    func_0200a678((uint8_t *)object + 0xa8);
    func_02056db0(object);
    return object;
}
