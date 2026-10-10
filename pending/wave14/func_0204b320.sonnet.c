#include "ffc/types.h"

extern uint32_t func_0204b1bc(uint8_t *p);

uint32_t func_0204b320(uint8_t *p)
{
    if (*(uint32_t *)(p + 4) != 0) {
        return 0;
    }
    return func_0204b1bc(p + 0x30);
}
