#include "ffc/types.h"

extern void func_ov000_021685c0(void);
extern uint32_t data_ov000_02170bc8;
extern uint16_t data_ov000_02170bcc[];

void func_ov000_021685f4(uint32_t a)
{
    if (a == 0xd) {
        return;
    }
    if (data_ov000_02170bc8 == 0x20) {
        func_ov000_021685c0();
        data_ov000_02170bc8 = 0;
        if (a == 0xa) {
            return;
        }
    }
    if (a == 0xa) {
        data_ov000_02170bc8 = 0x20;
        return;
    }
    a |= 0xf000;
    {
        uint32_t *p = &data_ov000_02170bc8;
        data_ov000_02170bcc[0x2e0 + *p] = (uint16_t)a;
        (*p)++;
    }
}
