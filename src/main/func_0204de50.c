#include "ffc/types.h"

extern uint32_t data_02139d6c[];
extern uint32_t data_02139da0[];
extern void func_0204de18(uint32_t *p);

uint32_t *func_0204de50(void)
{
    uint32_t *r4 = (uint32_t *)data_02139d6c[1];
    if (r4 == 0) {
        r4 = data_02139da0;
        data_02139d6c[1] = (uint32_t)r4;
        func_0204de18(r4);
    }
    return r4;
}
