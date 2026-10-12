#include "ffc/types.h"

extern uint32_t func_0207cabc(uint32_t v);
extern uint32_t func_0207cb04(uint32_t v);
extern uint32_t func_0207fc28(uint32_t a, uint32_t b);
extern uint32_t data_02141300[];

uint32_t func_0207fca0(uint32_t *obj, uint32_t idx)
{
    switch (idx) {
    case 9:
        func_0207cabc(data_02141300[1] & 0xffff);
        return 0;
    case 10:
        func_0207cb04(data_02141300[1] & 0xffff);
        return 0;
    case 7:
        if (func_0207fc28(obj[2], obj[12]) != 0) {
            return 9;
        }
        return 0x101;
    case 1:
        return 4;
    default:
        return 0x102;
    }
}
