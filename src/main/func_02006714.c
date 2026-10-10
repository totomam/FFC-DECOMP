#include "ffc/types.h"

extern void func_020079a8(void *a, uint32_t b);

void func_02006714(uint8_t *p)
{
    func_020079a8(p + 0x31d8, *(uint32_t *)(p + 0x8));
}
