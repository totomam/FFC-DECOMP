#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_02036490(uint32_t *dst, uint32_t *src)
{
    *(P *)(dst + 0x28 / 4) = *(P *)(src + 4 / 4);
}
