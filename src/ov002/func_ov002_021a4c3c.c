#include "ffc/types.h"

extern void func_02056c9c(void *p, int v);
extern char data_ov002_021d5190;

void *func_ov002_021a4c3c(void *a, uint32_t b)
{
    func_02056c9c(a, 0);
    *(void **)a = &data_ov002_021d5190;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    return a;
}
