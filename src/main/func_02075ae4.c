#include "ffc/types.h"

extern void func_ov000_02158fec(void *p);

void func_02075ae4(void *p)
{
    uint8_t *s = (uint8_t *)p;
    func_ov000_02158fec(p);
    *(uint32_t *)(s + 0x48) = 0;
    *(uint32_t *)(s + 0x4c) = 0;
}
