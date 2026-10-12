#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern void func_02035f58(void *p);
extern uint8_t data_020ae8cc[];

void *func_0203ad70(void *a0)
{
    uint8_t *r5 = (uint8_t *)a0;
    uint8_t *q;
    func_02056c9c(a0, 0);
    *(void **)r5 = (void *)data_020ae8cc;
    q = r5 + 0x80;
    *(uint32_t *)q = 0;
    *(int32_t *)(q + 4) = -1;
    *(uint8_t *)(q + 8) = 1;
    *(int32_t *)(q + 0xc) = 1;
    func_02035f58(q + 0x10);
    *(uint8_t *)(r5 + 0xf0) = 0;
    *(uint32_t *)(r5 + 0xf4) = 0;
    *(uint32_t *)(r5 + 0xf8) = 0;
    func_02035f58(r5 + 0xfc);
    func_02035f58(r5 + 0x15c);
    return r5;
}
