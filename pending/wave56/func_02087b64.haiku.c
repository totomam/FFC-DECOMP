#include "ffc/types.h"

extern uint32_t func_02087460(void);
extern uint32_t func_020873f8(void);
extern uint32_t data_02141788[];

uint32_t func_02087b64(uint32_t idx)
{
    uint32_t r4;

    switch (idx) {
    case 0:
        if (func_02087460() != 0) {
            return 0x21dbfa0;
        }
        return 0x21d7e00;
    case 1:
        if (data_02141788[1] == 0) {
            return 0;
        }
        r4 = func_020873f8() & 0xf;
        if (func_02087460() != 0) {
            if (r4 == 4) {
                return 0;
            }
            return 0xd000000;
        }
        if (r4 == 1) {
            return 0;
        }
        return 0x23e0000;
    case 2:
        return 0x1fffd40;
    case 3:
        return 0x2fe0560;
    case 4:
        return 0x2fff000;
    case 5:
        return 0xc1u << 18;
    case 6:
    default:
        return 0;
    }
}
