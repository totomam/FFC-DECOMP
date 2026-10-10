#include "ffc/types.h"

extern uint32_t data_ov002_021d3b30[][3];

uint32_t func_ov002_021ac9d8(uint32_t a, uint32_t b)
{
    return data_ov002_021d3b30[b][a - 1];
}
