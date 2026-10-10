/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __get_CPSR(void);
extern void __set_CPSR(uint32_t v);

uint32_t func_0208898c(uint32_t irq)
{
    uint32_t old = __get_CPSR();
    __set_CPSR((old & ~0x80u) | irq);
    return old & 0x80u;
}
