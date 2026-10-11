#include "ffc/types.h"

extern uint8_t data_ov000_0216e080[];
extern int32_t func_ov000_0214ec88(void *p, int32_t x);

int32_t func_ov000_0214ecc8(int32_t x)
{
    int32_t v = x;
    if (v <= 0 || func_ov000_0214ec88(data_ov000_0216e080, x) == 0) {
        return 1;
    }
    return 0;
}
