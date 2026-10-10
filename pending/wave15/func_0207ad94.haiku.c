#include "ffc/types.h"

extern uint32_t func_02078144(uint32_t a, uint32_t b);

uint32_t func_0207ad94(uint32_t *p)
{
    uint32_t v = func_02078144(*p, 0x20);
    if (v < 0x20) {
        return 0;
    }
    return (v - 0x20) & ~0x1fu;
}
