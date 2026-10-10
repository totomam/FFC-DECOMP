#include "ffc/types.h"

uint32_t func_02023ca8(void *obj, uint32_t x, uint32_t a, uint32_t b)
{
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[2])(obj, x, b);
    return ((uint32_t (*)(void *, uint32_t))(*(void ***)obj)[4])(obj, a);
}
