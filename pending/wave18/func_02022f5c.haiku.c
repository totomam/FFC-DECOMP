#include "ffc/types.h"

extern void func_02081e6c(uint8_t v);

void func_02022f5c(uint8_t *base, uint8_t v, uint32_t a, uint32_t b, uint32_t c)
{
    *(uint8_t *)(base + 0x1cc) = v;
    *(uint32_t *)(base + 0x1d0) = a;
    *(uint32_t *)(base + 0x1d4) = b;
    *(uint32_t *)(base + 0x1d8) = c;
    func_02081e6c(v);
}
