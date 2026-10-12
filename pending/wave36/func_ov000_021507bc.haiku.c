#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern uint32_t func_ov000_02151088;
extern int func_0208e094(void *);
extern void func_ov000_0214fbe4(int);

int func_ov000_021507bc(void)
{
    uint8_t *p = func_ov000_0214fa54();
    switch (func_0208e094(&func_ov000_02151088)) {
    case 2:
        func_ov000_0214fbe4(10);
        *(uint16_t *)(p + 0x12da) = 6;
        break;
    case 8:
        return 4;
    case 3:
    default:
        func_ov000_0214fbe4(11);
        return 7;
    }
    return 3;
}
