/* cflags: -nothumb */
#include "ffc/types.h"
extern uint64_t L_0209a980(uint32_t a, uint32_t b);
extern uint64_t L_0209a598(uint64_t a, uint64_t b);
uint64_t func_0209a6d4(uint64_t a, uint64_t b)
{
    if (b == 0) return a;
    if ((uint32_t)(a >> 32) != 0 || (uint32_t)(b >> 32) != 0) return L_0209a598(a, b);
    return L_0209a980((uint32_t)a, (uint32_t)b);
}
