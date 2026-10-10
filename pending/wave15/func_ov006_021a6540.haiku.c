#include "ffc/types.h"

extern uint32_t data_ov006_021bc70c[];

int func_ov006_021a6540(uint32_t x)
{
    if (x & (data_ov006_021bc70c[2] >> 4)) {
        return 1;
    }
    return 0;
}
