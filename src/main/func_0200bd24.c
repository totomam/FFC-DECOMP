#include "ffc/types.h"
extern void func_0200bd64(void *p);
void func_0200bd24(uint8_t *p, uint32_t a, ...)
{
    uint32_t *v = &a;
    *(uint32_t*)(p + 0xb0) = v[0];
    *(uint32_t*)(p + 0xb4) = v[1];
    func_0200bd64(p);
}
