#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_ov003_02178544(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x70 / 4);
}
