/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_0214194c;

uint32_t func_020897f0(void)
{
    uint32_t v;
    do {
        v = *(volatile uint32_t *)&data_0214194c;
    } while (v == 1);
    return v;
}
