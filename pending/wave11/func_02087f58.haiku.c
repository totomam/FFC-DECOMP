/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __MRC(uint32_t cp, uint32_t op1, uint32_t crn, uint32_t crm, uint32_t op2);
extern void __MCR(uint32_t cp, uint32_t op1, uint32_t val, uint32_t crn, uint32_t crm, uint32_t op2);

void func_02087f58(uint32_t x)
{
    uint32_t v = __MRC(15, 0, 3, 0, 0);
    __MCR(15, 0, v | x, 3, 0, 0);
}
