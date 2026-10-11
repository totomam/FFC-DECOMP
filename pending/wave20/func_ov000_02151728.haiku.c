#include "ffc/types.h"

extern void *data_ov000_0216e268;
extern uint32_t func_0208db58(void *a);

int func_ov000_02151728(void *a)
{
    if (a == 0) {
        return -1;
    }
    *(uint32_t *)((uint8_t *)data_ov000_0216e268 + 0x1a90) = 2;
    {
        uint32_t r = func_0208db58(a);
        if (r == 2) {
            r = 0;
        }
        return r;
    }
}
