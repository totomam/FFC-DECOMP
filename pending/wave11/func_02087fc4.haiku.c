/* cflags: -nothumb */
#include "ffc/types.h"

extern void __set_CP15_c6(uint32_t v);

void func_02087fc4(uint32_t a)
{
    __set_CP15_c6(a);
}
