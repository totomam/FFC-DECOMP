#include "ffc/types.h"
extern uint32_t data_020b3380[];
extern uint32_t data_020b3394[];
extern void func_0209724c(void *p);
void *func_02098024(uint32_t *p)
{
    uint8_t *q;
    uint32_t a = (uint32_t)data_020b3380;
    p[0] = a;
    p[2] = (uint32_t)data_020b3394;
    p[1] = 0;
    a -= 12;
    q = (uint8_t *)p + *(uint32_t *)a;
    func_0209724c(q);
    *(uint32_t *)(q + 0x30) = 0;
    *(q + 0x34) = 0x20;
    return p;
}
