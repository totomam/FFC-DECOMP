/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __get_APSR(void);
extern void __set_CPSR_c(uint32_t v);

uint32_t func_02088964(void)
{
    uint32_t r = __get_APSR();
    __set_CPSR_c(r & ~0x80u);
    return r & 0x80u;
}
