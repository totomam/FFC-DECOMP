#include "ffc/types.h"

extern void *func_0200d5ec(void *object);
extern void func_020641a4(void *object);

void *func_0200d878(void *object)
{
    func_0200d5ec((uint8_t *)object + 0x80);
    func_020641a4(object);
    return object;
}
