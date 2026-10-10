#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t v, uint32_t n);
extern char data_ov007_021c2a38;

void *func_ov007_0219ad00(void *a, uint32_t x, uint32_t b)
{
    func_020694ac(a, x, 0);
    *(void **)a = &data_ov007_021c2a38;
    *(uint32_t *)((uint8_t *)a + 0xb8) = b;
    return a;
}
