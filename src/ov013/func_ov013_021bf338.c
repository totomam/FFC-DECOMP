#include "ffc/types.h"

extern void func_02069434(void *p, uint32_t v, uint32_t w);
extern char data_ov013_021c4520[];

void *func_ov013_021bf338(void *a, uint32_t b, uint32_t c)
{
    func_02069434(a, 0, c);
    *(void **)a = data_ov013_021c4520;
    *(uint32_t *)((uint8_t *)a + 0xb8) = b;
    *(uint32_t *)((uint8_t *)a + 0xbc) = c;
    return a;
}
