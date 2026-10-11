#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v, uint32_t w);
extern char data_ov003_0217ab84[];

void *func_ov003_02164cd0(void *a, uint32_t b, uint32_t c)
{
    func_02056c9c(a, 0, c);
    *(void **)a = data_ov003_0217ab84;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    *(uint16_t *)((uint8_t *)a + 0x84) = (uint16_t)c;
    return a;
}
