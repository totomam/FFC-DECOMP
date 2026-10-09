#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_020203f0(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x68 / 4);
}
