#include "ffc/types.h"

extern int32_t func_02085bc0(int32_t a, int32_t b, int32_t c);
extern int32_t func_02088280(void);
extern int32_t func_020883d8(void);
extern int32_t func_020871d8(int32_t x);

int32_t func_ov000_02148e2c(int32_t a, int32_t b, int32_t c)
{
    int32_t ret = 0;
    int32_t i;
    for (i = 0; i < 5; i++) {
        ret = func_02085bc0(a, b, c);
        if (ret != 1) {
            break;
        }
        if (func_02088280() != 0) {
            if (func_020883d8() != 0) {
                func_020871d8(1);
            }
        }
    }
    return ret;
}
