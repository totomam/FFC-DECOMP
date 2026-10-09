#include "ffc/types.h"

extern void func_02069434(void *p, int v);
extern char data_ov007_021c3f98;

void *func_ov007_021a2588(void *a, uint32_t b)
{
    func_02069434(a, 0);
    *(void **)a = &data_ov007_021c3f98;
    *(uint32_t *)((uint8_t *)a + 0xbc) = b;
    return a;
}
