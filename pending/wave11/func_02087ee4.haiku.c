/* cflags: -nothumb */
#include "ffc/types.h"

void func_02087ee4(void)
{
    uint32_t r = __builtin_arm_mrc(15, 0, 1, 0, 0);
    __builtin_arm_mcr(15, 0, r | 1, 1, 0, 0);
}
