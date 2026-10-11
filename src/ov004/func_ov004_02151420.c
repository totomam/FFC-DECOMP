#include "ffc/types.h"

extern void func_0200d5ec(void *object);

void *func_ov004_02151420(void *object)
{
    uint8_t *p = (uint8_t *)object;
    func_0200d5ec(p + 0x24);
    func_0200d5ec(p + 0x18);
    func_0200d5ec(p + 0xc);
    func_0200d5ec(p);
    return p;
}
