/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __mrc_p15_c9_c1_0(void);

uint32_t func_02087ed0(void)
{
    return __mrc_p15_c9_c1_0() & 0xfffff000;
}
