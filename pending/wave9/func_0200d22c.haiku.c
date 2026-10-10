#include "ffc/types.h"

extern void func_02056c4c(void *p);

void func_0200d22c(uint8_t *p)
{
    func_02056c4c(p + 0x48);
    *(uint32_t *)(p + 0x88) = 0;
}
