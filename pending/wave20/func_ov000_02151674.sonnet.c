#include "ffc/types.h"

extern int32_t func_0208d8ec(void);
extern uint8_t *data_ov000_0216e268;

int32_t func_ov000_02151674(void *p)
{
    int32_t z = 0;
    int32_t r;
    uint8_t *g;
    if (p == 0) {
        return ~z;
    }
    g = data_ov000_0216e268;
    *(volatile int32_t *)(g + 0x1a90) = 3;
    data_ov000_0216e268 = (uint8_t *)z;
    r = func_0208d8ec();
    if (r == 2) {
        r = z;
    }
    return r;
}
