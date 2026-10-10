#include "ffc/types.h"

extern uint32_t *data_021452e0;

void func_0209cd04(uint32_t a, uint32_t b, uint32_t *node)
{
    node[0] = (uint32_t)data_021452e0;
    node[1] = b;
    node[2] = a;
    data_021452e0 = node;
}
