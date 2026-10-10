#include "ffc/types.h"

uint32_t func_0208baf4(void)
{
    if (*(volatile uint16_t *)0x04000304 & 1) {
        return 1;
    }
    return 0;
}
