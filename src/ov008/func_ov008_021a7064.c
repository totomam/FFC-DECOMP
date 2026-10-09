#include "ffc/types.h"

extern void func_02056c9c(void *p, int v);
extern char data_ov008_021a9048;

void *func_ov008_021a7064(void *a, uint32_t b)
{
    func_02056c9c(a, 0);
    *(void **)a = &data_ov008_021a9048;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    return a;
}
