#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_ov002_021b7df4(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x20 / 4);
}
