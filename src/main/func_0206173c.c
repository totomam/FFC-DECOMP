#include "ffc/types.h"

extern uint32_t func_02061568(const void *object);

uint32_t func_0206173c(const void *object)
{
    uint32_t p = func_02061568(object);
    uint32_t v = *(uint32_t *)(p + 0x2c);
    return p + v;
}
