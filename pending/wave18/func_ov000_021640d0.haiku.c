#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

int func_ov000_021640d0(int a)
{
    uint8_t *p = data_ov000_0217096c;
    if (p == 0 || a == 0) {
        return 0;
    }
    *(int *)(p + 0x724) = a;
    return 1;
}
