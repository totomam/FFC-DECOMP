#include "ffc/types.h"

extern uint32_t func_020367bc(void *p, uint32_t i);

uint32_t func_020368cc(void *p, uint32_t v)
{
    uint32_t i;
    for (i = 0; i < 5; i++) {
        if (((uint8_t *)p)[0x34 + i * 4] != 0) {
            if (func_020367bc(p, i) == v) {
                return 1;
            }
        }
    }
    return 0;
}
