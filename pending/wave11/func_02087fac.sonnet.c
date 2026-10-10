/* cflags: -nothumb */
#include "ffc/types.h"
void func_02087fac(uint32_t v)
{
    __asm { mcr p15, 0, v, c6, c3, 0 }
}
