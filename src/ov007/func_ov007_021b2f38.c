#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v, uint32_t w);
extern char data_ov007_021c6010[];

void *func_ov007_021b2f38(void *a, uint32_t b, uint32_t c)
{
    func_02056c9c(a, 0, c);
    *(void **)a = data_ov007_021c6010;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    *(uint32_t *)((uint8_t *)a + 0x84) = c;
    return a;
}
