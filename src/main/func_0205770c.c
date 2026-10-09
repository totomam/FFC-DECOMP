#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
void func_0205770c(P *dst, uint32_t *src)
{
    *dst = *(P *)(src + 0x1c / 4);
}
