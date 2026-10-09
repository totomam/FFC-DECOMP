#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_0206690c(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x24 / 4);
}
