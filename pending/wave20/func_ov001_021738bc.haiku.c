#include "ffc/types.h"

extern uint32_t func_ov001_02173694(void *p);
extern uint32_t func_ov001_02173634(void *p);

uint32_t func_ov001_021738bc(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0x164);
    if (q == 0) {
        return 0;
    }
    if (q[3] != 0) {
        return func_ov001_02173694(p);
    }
    return func_ov001_02173634(p);
}
