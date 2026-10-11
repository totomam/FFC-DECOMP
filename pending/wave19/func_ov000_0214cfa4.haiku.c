#include "ffc/types.h"

extern int32_t func_ov000_0214d134(uint32_t);
extern uint32_t func_ov000_0214d334(void *);
extern uint32_t *data_ov000_02169a34;
extern uint8_t data_ov000_02169a70[];
extern uint32_t data_ov000_0216e00c[];

int32_t func_ov000_0214cfa4(void) {
    int32_t r4 = func_ov000_0214d134(data_ov000_02169a34[8]);
    if (r4 >= 0) {
        data_ov000_0216e00c[3] = func_ov000_0214d334(data_ov000_02169a70);
    }
    return r4;
}
