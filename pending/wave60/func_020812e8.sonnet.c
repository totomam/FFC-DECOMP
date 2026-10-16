#include "ffc/types.h"
void func_020812e8(uint32_t a, uint32_t b)
{
    uint32_t base = 0x4000280;
    *(volatile uint16_t *)base = 1;
    base += 0x10;
    *(volatile unsigned long long *)base = (unsigned long long)a << 32;
    base += 8;
    *(volatile unsigned long long *)base = (unsigned long long)b;
}
