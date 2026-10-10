#include "ffc/types.h"

extern void func_0206e2b4(void *p, uint32_t a, uint32_t b);

void func_0206e288(void *p, uint32_t a)
{
    uint32_t s = *(uint32_t *)((uint8_t *)p + 0x26c);
    func_0206e2b4(p, 0xffff ^ (1u << s), a);
}
