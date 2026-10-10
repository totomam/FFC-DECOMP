#include "ffc/types.h"

void *func_ov000_02159154(void *p, uint32_t v)
{
    uint32_t tag = 0x4457434d;
    uint32_t *q = (uint32_t *)p;
    q[1] = v;
    q[0] = tag;
    return (uint8_t *)p + 0x20;
}
