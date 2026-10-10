#include "ffc/types.h"

extern void func_02046f28(void *p, uint32_t v, uint32_t w, uint32_t x);
extern char data_020afa18[];

void *func_020474d0(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    func_02046f28(a, b, 3, d);
    *(void **)a = data_020afa18;
    *(uint32_t *)((uint8_t *)a + 0x90) = c;
    *(uint32_t *)((uint8_t *)a + 0x94) = d;
    return a;
}
