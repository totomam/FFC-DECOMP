#include "ffc/types.h"

extern uint32_t func_ov006_0219b100(void);
extern void func_ov006_0219b170(void);
extern void func_ov006_0219b1ac(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_0219b2a4(void);
extern void func_ov006_0219b2c8(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov006_021ba0c8[];

void func_ov006_0219b0a4(uint32_t a, uint32_t b, uint32_t c)
{
    for (;;) {
        switch (data_ov006_021ba0c8[4]) {
        case 0:
        case 1:
            if (func_ov006_0219b100() == 0) {
                return;
            }
            break;
        case 2:
            func_ov006_0219b170();
            break;
        case 3:
            func_ov006_0219b1ac(a, b, c);
            return;
        case 4:
            func_ov006_0219b2a4();
            break;
        case 5:
            func_ov006_0219b2c8(a, b, c);
            return;
        case 6:
        default:
            break;
        }
    }
}
