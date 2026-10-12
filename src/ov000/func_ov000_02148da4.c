#include "ffc/types.h"

extern uint32_t func_ov000_02148c9c(void);
extern uint32_t data_ov000_02169800;

int func_ov000_02148da4(int idx, int32_t *out0, int32_t *out1)
{
    switch (idx) {
    case 0:
    case 1:
    case 2:
    case 3:
        *out0 = data_ov000_02169800 + (idx << 8);
        *out1 = 0x100;
        return 1;
    case 0x11:
    case 0x12:
    case 0x13:
        if (func_ov000_02148c9c() >= 0x20) {
            *out0 = data_ov000_02169800 - (6 << 8) + ((idx - 0x11) << 9);
            *out1 = 0x200;
            return 1;
        }
        *out0 = -1;
        *out1 = 0;
        return 0;
    default:
        *out0 = -1;
        *out1 = 0;
        return 0;
    }
}
