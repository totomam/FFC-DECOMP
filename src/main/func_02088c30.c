#include "ffc/types.h"

extern uint32_t data_0214188c;
extern uint16_t data_02141890[];

void func_02088c30(void)
{
    int i;

    data_0214188c = 0;
    for (i = 0; i < 9; i++) {
        data_02141890[i] = 0;
    }
}
