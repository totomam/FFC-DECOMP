#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_0206927c(void *object);

void *func_ov007_021a6ddc(uint8_t *obj)
{
    func_020059cc(obj + 0xbc);
    func_0206927c(obj);
    *(uint32_t *)(obj + 0x94) = 0;
    *(uint32_t *)(obj + 0x98) = 0;
    *(uint32_t *)(obj + 0x9c) = 0;
    return obj;
}
