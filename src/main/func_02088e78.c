#include "ffc/types.h"

uint32_t func_02088e78(void)
{
    volatile uint8_t *p = (volatile uint8_t *)0x02000000;
    return (p[9] & 2) != 0;
}
