#include "ffc/types.h"

extern void func_02046f28(void *p, uint32_t v, uint32_t n);
extern char data_020af628;

void *func_02041d68(void *a, uint32_t x, uint32_t b)
{
    func_02046f28(a, x, 4);
    *(void **)a = &data_020af628;
    *(uint32_t *)((uint8_t *)a + 0x90) = b;
    return a;
}
