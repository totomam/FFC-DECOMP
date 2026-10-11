#include "ffc/types.h"

extern int32_t func_0208d8ec(void);
extern uint8_t *data_ov000_0216e268;

int32_t func_ov000_02151674(int32_t a)
{
    uint32_t z;
    int32_t r;
    if (a == 0) {
        return -1;
    }
    z = 0;
    *(uint32_t *)(data_ov000_0216e268 + 0x1a90) = 3;
    data_ov000_0216e268 = (uint8_t *)z;
    r = func_0208d8ec();
    if (r == 2) {
        r = z;
    }
    return r;
}
