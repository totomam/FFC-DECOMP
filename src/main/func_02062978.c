#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_02062978(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x14 / 4);
}
