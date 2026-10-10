#include "ffc/types.h"

extern uint8_t data_02141510[];

void func_ov000_02147794(void *p)
{
    uint8_t *q = *(uint8_t **)(data_02141510 + 4);
    *(void **)(q + 0xa4) = p;
}
