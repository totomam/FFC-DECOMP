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
    case 2:
        if (data_02141788[1] == 0) {
            return 0;
        }
        r4 = func_020873f8() & 0xf;
        if (func_02087460() != 0) {
            return r4 == 4 ? 0 : 0xd000000;
        }
        return r4 == 1 ? 0 : 0x23e0000;
    case 3:
        return 0x1fffd40;
    case 4:
        return 0x2fe0560;
    case 5:
        return 0x2fff000;
    case 6:
        return 0xc1u << 18;
    case 1:
    default:
        return 0;
    }
}
