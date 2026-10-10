/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t __get_cp15_dacr(void);
extern void __set_cp15_dacr(uint32_t v);
void func_02087f68(uint32_t mask) {
    uint32_t v = __get_cp15_dacr();
    __set_cp15_dacr(v & ~mask);
}
