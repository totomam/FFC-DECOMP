#include "ffc/types.h"

extern uint32_t data_ov000_0217001c[];

void func_ov000_02158fec(void)
{
    if (data_ov000_0217001c[0] != 9) {
        data_ov000_0217001c[0] = 0;
        data_ov000_0217001c[1] = 0;
    }
}
