#include "ffc/types.h"

extern void func_ov000_021652a8(int a, ...);
extern uint8_t data_ov001_02194164[];
extern uint8_t data_ov001_0219417c[];
extern uint8_t data_ov001_021941a8[];
extern uint32_t data_ov001_02193d6c[];

void func_ov001_02185478(int a, int b)
{
    func_ov000_021652a8(3, 4, 0x40, data_ov001_02194164);
    if (a < 50 || a > 254) {
        func_ov000_021652a8(3, 4, 2, data_ov001_0219417c, a, b);
        return;
    }
    func_ov000_021652a8(3, 4, 0x10, data_ov001_021941a8, a, b);
    data_ov001_02193d6c[a] = b;
}
