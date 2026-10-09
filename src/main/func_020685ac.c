#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_020685ac(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x5c / 4);
}
