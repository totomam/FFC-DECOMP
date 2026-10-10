/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t __get_cp15_c1(void);
extern void __set_cp15_c1(uint32_t v);

void func_02087ef4(void)
{
    uint32_t v = __get_cp15_c1();
    __set_cp15_c1(v & ~1u);
}
