#include "ffc/types.h"

void func_02052be0(uint32_t *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old;
    uint16_t v;

    old = *ime;
    *ime = 0;
    p[2] = p[2] + 1;
    (void)*ime;
    v = 0;
    if (old != 0) {
        v = 1;
    }
    *ime = v;
}
