#include "ffc/types.h"

extern int32_t func_ov000_02167f34(void *a, void *b);
extern uint8_t data_ov000_0216bb4c[];

int32_t func_ov000_02167414(void *p)
{
    if (!func_ov000_02167f34(p, data_ov000_0216bb4c)) {
        return 0;
    }
    ((int32_t *)p)[3] = 1;
    return 1;
}
