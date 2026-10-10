#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern uint32_t func_ov000_021509e8;
extern int func_0208d850(void *);
extern void func_ov000_0214fbe4(int);

int func_ov000_02150660(void)
{
    uint8_t *p = func_ov000_0214fa54();
    switch (func_0208d850(&func_ov000_021509e8)) {
    case 2:
        func_ov000_0214fbe4(4);
        *(uint16_t *)(p + 0x12da) = 2;
        break;
    case 8:
        return 4;
    case 3:
    default:
        func_ov000_0214fbe4(0xb);
        return 7;
    }
    return 3;
}
