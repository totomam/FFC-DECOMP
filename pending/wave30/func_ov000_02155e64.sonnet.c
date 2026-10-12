#include "ffc/types.h"

extern void func_ov000_02155540(void *p);
extern uint8_t data_ov000_02169c30[];
extern uint8_t data_ov000_02169c58[];
extern uint8_t data_ov000_02169c7c[];

int func_ov000_02155e64(int x)
{
    switch (x) {
    case 0: func_ov000_02155540(data_ov000_02169c30); break;
    case 2: func_ov000_02155540(data_ov000_02169c58); break;
    case 1: func_ov000_02155540(data_ov000_02169c7c); break;
    default: return 0;
    }
    return 1;
}
