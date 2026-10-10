#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t x);

uint32_t func_ov001_02181c00(void **p)
{
    uint32_t *q = (uint32_t *)*p;
    uint32_t a = *q;
    uint16_t b = *(uint16_t *)((uint8_t *)q + 4);
    uint64_t r = func_0209a978(a * b);
    return (uint32_t)(r >> 32);
}
