#include "ffc/types.h"

extern uint8_t data_02141510[];

void func_ov000_02147844(void)
{
    uint32_t *p = *(uint32_t **)(data_02141510 + 4);
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0xa4);
    if (q != 0) {
        *q = 0;
    }
}
