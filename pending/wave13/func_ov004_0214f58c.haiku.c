#include "ffc/types.h"

extern void func_01ffe080(void *a, uint32_t b);

void func_ov004_0214f58c(void *a, uint8_t *b)
{
    func_01ffe080(a, *(uint32_t *)(b + 0x90));
}
