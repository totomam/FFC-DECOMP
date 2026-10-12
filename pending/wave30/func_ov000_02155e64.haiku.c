#include "ffc/types.h"

extern void func_ov000_02155540(void *p);
extern uint8_t data_ov000_02169c30[];
extern uint8_t data_ov000_02169c58[];
extern uint8_t data_ov000_02169c7c[];

int func_ov000_02155e64(int x)
{
    uint8_t *p;
    switch (x) {
    case 0:
        p = data_ov000_02169c30;
        break;
    case 1:
        p = data_ov000_02169c7c;
        break;
    case 2:
        p = data_ov000_02169c58;
        break;
    default:
        return 0;
    }
    func_ov000_02155540(p);
    return 1;
}
