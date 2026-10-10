#include "ffc/types.h"

uint32_t func_0208475c(uint32_t idx)
{
    uint32_t v = *(volatile uint32_t *)(0x40000b8u + idx * 12u);
    return (v & 0x80000000u) >> 31;
}
