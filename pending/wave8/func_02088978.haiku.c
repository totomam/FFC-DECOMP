/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_02088978_cpsr_get(void);
extern void func_02088978_cpsr_set(uint32_t v);

uint32_t func_02088978(void)
{
    uint32_t cpsr = func_02088978_cpsr_get();
    func_02088978_cpsr_set(cpsr | 0x80);
    return cpsr & 0x80;
}
