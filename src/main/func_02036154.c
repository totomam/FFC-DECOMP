#include "ffc/types.h"

extern uint8_t func_02035dac(const void *object);

int func_02036154(uint8_t *p)
{
    int count = 0;
    uint32_t i;

    p = p + 4;
    for (i = 0; i < 4; i++) {
        if (func_02035dac(p + (i << 3))) {
            count++;
        }
    }
    return count;
}
