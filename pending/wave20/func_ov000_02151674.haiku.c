#include "ffc/types.h"

extern int32_t func_0208d8ec(void);
extern uint8_t *data_ov000_0216e268;

int32_t func_ov000_02151674(void *p)
{
    int32_t ret = 0;
    if (p == 0) {
        return -1;
    }
    *(uint32_t *)(data_ov000_0216e268 + 0x1a90) = 3;
    data_ov000_0216e268 = 0;
    ret = func_0208d8ec();
    if (ret == 2) {
        ret = 0;
    }
    return ret;
}
