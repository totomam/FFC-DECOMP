#include "ffc/types.h"

extern uint32_t data_ov000_0216bcb0;
extern uint32_t data_ov000_0216e014;
extern uint32_t data_ov000_0216e010;
extern uint32_t func_020889dc(void);
extern void func_020871d8(int x);

uint32_t func_ov000_0214e984(void)
{
    if (data_ov000_0216bcb0 == 0) {
        if ((data_ov000_0216e014 & 3) == 1) {
            if (func_020889dc() != 0x12) {
                func_020871d8(10);
            }
        }
    } else {
        if (data_ov000_0216e010 == 0) {
            data_ov000_0216e010 = data_ov000_0216bcb0;
        }
    }
    return data_ov000_0216bcb0;
}
