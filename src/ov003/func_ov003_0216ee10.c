#include "ffc/types.h"

uint16_t func_ov003_0216ee10(uint8_t *p, uint32_t i)
{
    int32_t o8 = *(int32_t *)(p + 8);
    uint8_t *b;
    if (o8 == 0) {
        b = (uint8_t *)0;
    } else {
        b = p + o8;
    }
    {
        int32_t o4 = *(int32_t *)(b + 4);
        uint16_t *arr = (uint16_t *)(b + o4);
        return arr[i];
    }
}
