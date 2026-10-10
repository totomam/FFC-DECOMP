#include "ffc/types.h"

extern uint32_t data_0213df20;

void func_02056dc8(uint8_t *p, uint32_t v)
{
    *(uint32_t *)(p + 0x7c) = v;
    data_0213df20 = v;
}
