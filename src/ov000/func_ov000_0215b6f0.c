#include "ffc/types.h"

extern uint32_t data_ov000_0217008c[];

int func_ov000_0215b6f0(void)
{
    int i;
    for (i = 0; i < 0x20; i++) {
        if (data_ov000_0217008c[i] == 0) {
            return i;
        }
    }
    return -1;
}
