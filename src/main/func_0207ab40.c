#include "ffc/types.h"

extern uint8_t *data_0213ec90;

uint32_t func_0207ab40(uint32_t idx)
{
    uint32_t *tbl = *(uint32_t **)(data_0213ec90 + 0x90);
    if (idx >= tbl[2]) {
        return 0;
    }
    return *(uint32_t *)((uint8_t *)tbl + (idx << 4) + 0x14);
}
