#include "ffc/types.h"

extern void func_0209724c(void *p);
extern int32_t data_020b33f8;
extern int32_t data_020b340c;

void *func_02097ef4(void *a0)
{
    uint8_t *r5 = (uint8_t *)a0;
    uint32_t v;
    uint8_t *r4;

    v = (uint32_t)&data_020b33f8;
    *(uint32_t *)r5 = v;
    *(uint32_t *)(r5 + 4) = (uint32_t)&data_020b340c;
    v = v - 12;
    r4 = r5 + *(int32_t *)v;
    func_0209724c(r4);
    *(uint32_t *)(r4 + 0x30) = 0;
    *(uint8_t *)(r4 + 0x34) = 0x20;
    return r5;
}
