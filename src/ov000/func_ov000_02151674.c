#include "ffc/types.h"
extern uint8_t *data_ov000_0216e268;
extern int32_t func_0208d8ec(int32_t);
int32_t func_ov000_02151674(int32_t a) {
    int32_t r;
    if (a == 0) return -1;
    *(int32_t *)(data_ov000_0216e268 + 0x1a90) = 3;
    data_ov000_0216e268 = 0;
    r = func_0208d8ec(a);
    if (r == 2) r = 0;
    return r;
}
