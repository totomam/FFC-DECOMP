/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __get_APSR(void);

uint32_t func_020889d0(void)
{
    return __get_APSR() & 0x80;
}
