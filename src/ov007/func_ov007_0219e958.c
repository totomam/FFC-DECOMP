#include "ffc/types.h"

extern void func_02069434(void *p, int v);
extern char data_ov007_021c3134;

void *func_ov007_0219e958(void *a, uint32_t b)
{
    func_02069434(a, 0);
    *(void **)a = &data_ov007_021c3134;
    *(uint32_t *)((uint8_t *)a + 0xb8) = b;
    return a;
}
