#include "ffc/types.h"

extern void func_02056c4c(uint32_t a);

void func_ov001_0218b9b8(uint8_t *p)
{
    func_02056c4c(*(uint32_t *)(p + 0x730));
    *(uint32_t *)(p + 0x738) = 0;
}
