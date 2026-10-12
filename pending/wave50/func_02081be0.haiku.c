#include "ffc/types.h"

void func_02081be0(uint32_t *src)
{
    uint32_t addr = 0x04000440;
    uint32_t s14;
    uint32_t s15;

    *(volatile uint32_t *)addr = 3;
    addr += 0x18;
    *(volatile uint32_t *)addr = src[0];
    *(volatile uint32_t *)addr = src[1];
    *(volatile uint32_t *)addr = src[2];
    *(volatile uint32_t *)addr = src[3];
    *(volatile uint32_t *)addr = src[4];
    *(volatile uint32_t *)addr = src[5];
    *(volatile uint32_t *)addr = src[6];
    *(volatile uint32_t *)addr = src[7];
    *(volatile uint32_t *)addr = src[8] << 4;
    *(volatile uint32_t *)addr = src[9] << 4;
    *(volatile uint32_t *)addr = src[10] << 4;
    *(volatile uint32_t *)addr = src[11] << 4;
    *(volatile uint32_t *)addr = src[12] << 4;
    *(volatile uint32_t *)addr = src[13] << 4;
    s14 = src[14];
    s15 = src[15];
    *(volatile uint32_t *)addr = s14 << 4;
    *(volatile uint32_t *)addr = s15 << 4;
}
