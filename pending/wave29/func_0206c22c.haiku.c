#include "ffc/types.h"

extern int32_t data_0213e178[];

uint16_t func_0206c22c(uint8_t *p)
{
    uint16_t old;
    uint16_t v = 0;

    old = *(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = 0;
    if (old != 0) {
        v = 1;
    }
    if (*p == 0) {
        old = *(volatile uint16_t *)0x04000208;
        *(volatile uint16_t *)0x04000208 = v;
        return old;
    }
    *p = 0;
    data_0213e178[1]--;
    old = *(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = v;
    return old;
}
