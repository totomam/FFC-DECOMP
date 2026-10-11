#include "ffc/types.h"

extern void func_02053234(void *object);

void *func_0205d5f8(void *obj)
{
    func_02053234(obj);
    *((uint8_t *)obj + 0x24) = 0;
    *((uint8_t *)obj + 0x30) = 0;
    *((uint32_t *)((uint8_t *)obj + 4)) = 0;
    *((uint8_t *)obj + 0xc) = 0;
    *((uint32_t *)((uint8_t *)obj + 0x10)) = 0;
    *((uint8_t *)obj + 0x18) = 0;
    *((uint32_t *)((uint8_t *)obj + 0x1c)) = 0;
    *((uint32_t *)((uint8_t *)obj + 0x28)) = 0;
    *((uint32_t *)((uint8_t *)obj + 0x34)) = 0;
    return obj;
}
