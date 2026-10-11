#include "ffc/types.h"

extern void func_02069528(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02036750(void *p);
extern uint32_t *data_0213df18;
extern int data_ov009_021b0d50;

void *func_ov009_021adff0(void *a, uint8_t b)
{
    uint8_t *p = (uint8_t *)a;
    func_02069528(a, data_0213df18[8], 0, 0);
    *(int **)p = (int *)&data_ov009_021b0d50;
    *(uint32_t *)(p + 0xbc) = 0;
    func_02036750(p + 0xe8);
    p[0x148] = b;
    *(uint32_t *)(p + 0x14c) = 0;
    return a;
}
