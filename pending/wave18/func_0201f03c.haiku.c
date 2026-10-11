#include "ffc/types.h"

extern uint32_t func_0201d28c(void *p, uint32_t v, uint32_t n);

uint32_t func_0201f03c(uint8_t *p, uint32_t x)
{
    if (x == 0) {
        return func_0201d28c(p, *(uint32_t *)(p + 0x7c), 8);
    }
    return func_0201d28c(p, *(uint32_t *)(p + 0x80), 8);
}
