#include "ffc/types.h"

extern int func_02092948(int a, uint32_t b);
extern uint32_t data_ov001_02193d6c[];
extern uint32_t data_ov001_02193dec[];

int func_ov001_02185448(int a0)
{
    return func_02092948(a0, data_ov001_02193d6c[0x7c / 4]) == 0 ||
        func_02092948(a0, data_ov001_02193dec[0]) == 0;
}
