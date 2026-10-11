#include "ffc/types.h"

extern uint32_t func_020698fc(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_020697ac(uint32_t a, uint32_t b);

uint32_t func_02069828(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *ap = &d - 2;
    uint32_t x = *ap++;
    uint32_t y = *ap;
    return func_020697ac(a, func_020698fc(a, x, y));
}
