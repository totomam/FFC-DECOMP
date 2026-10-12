#include "ffc/types.h"

extern uint32_t func_ov000_0214fca8(void);
extern uint32_t func_02087460(void);

uint32_t func_ov000_0214f4b4(uint32_t *p, uint32_t r1) {
    uint32_t val;
    if (r1 == 0) {
        r1 = func_ov000_0214fca8();
    }
    switch (r1) {
    case 1:
        val = 0x2300;
        break;
    case 2:
        if (func_02087460() == 0) {
            return 0;
        }
        val = 0x4800;
        break;
    default:
        return 0;
    }
    *p = val;
    return 1;
}
