#include "ffc/types.h"

extern uint8_t data_ov006_021bc6ac;
extern void func_ov006_021b4488(int32_t x);

uint32_t func_ov006_021a3b28(void) {
    if (data_ov006_021bc6ac == 0) {
        return 0;
    }
    func_ov006_021b4488(1);
    data_ov006_021bc6ac = 0;
    return 1;
}
