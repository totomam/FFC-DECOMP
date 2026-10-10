#include "ffc/types.h"

extern void data_ov017_01ffe081(void *a, uint32_t b);

void func_ov004_0214f58c(void *a, uint8_t *b)
{
    data_ov017_01ffe081(a, *(uint32_t *)(b + 0x90));
}
