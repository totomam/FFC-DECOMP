#include "ffc/types.h"

extern int32_t func_ov000_02163408(void);

int32_t func_ov000_021640a0(int32_t r0)
{
    switch (r0) {
    case 2:
        return 0x24;
    case 3:
        return 0xc;
    case 4: {
        int32_t r1 = func_ov000_02163408() - 1;
        if (r1 == 0) {
            return 0x10;
        }
        return 0x18 * r1 + 0x10;
    }
    default:
        return 8;
    }
}
