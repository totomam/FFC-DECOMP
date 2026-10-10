#include "ffc/types.h"

extern uint8_t data_02139d6c[];
extern uint8_t data_02139d74[];
extern void func_0204a894(void *p);

void *func_0204db34(void)
{
    uint32_t *r4 = (uint32_t *)data_02139d74;
    if (*(uint32_t *)(data_02139d6c + 8) == 0) {
        func_0204a894(r4 + 1);
        r4[8] = 0;
        r4[7] = 0;
        r4[0] = 1;
    }
    return r4;
}
