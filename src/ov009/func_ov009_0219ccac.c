#include "ffc/types.h"

extern void func_ov009_0219b5ec(uint32_t a, uint32_t b, uint32_t c);

void func_ov009_0219ccac(uint8_t *p, uint32_t b)
{
    func_ov009_0219b5ec(*(uint32_t *)(p + 0xa8), *(uint32_t *)(p + 0xac), b);
}
