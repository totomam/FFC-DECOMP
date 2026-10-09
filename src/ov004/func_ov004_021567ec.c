#include "ffc/types.h"

extern void *func_02054a88(void *object);
extern void func_02057698(void *object);

void *func_ov004_021567ec(void *object)
{
    func_02054a88((uint8_t *)object + 0x2c);
    func_02057698(object);
    return object;
}
