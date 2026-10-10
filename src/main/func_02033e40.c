#include "ffc/types.h"

extern uint8_t func_02035dac(const void *object);
extern uint32_t func_02035eb0(const void *object);

void func_02033e40(void *self, const void *obj)
{
    *(uint32_t *)((uint8_t *)self + 0x2c) = func_02035dac(obj);
    *(uint32_t *)((uint8_t *)self + 0x30) = func_02035eb0(obj);
}
