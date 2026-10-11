#include "ffc/types.h"

extern void func_02069434(void *p, int x);
extern void func_020695e4(void *p, int x);
extern uint8_t data_ov007_021c5e94[];

void *func_ov007_021b1264(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint32_t *q = (uint32_t *)p;
    func_02069434(p, 0);
    q[0] = (uint32_t)data_ov007_021c5e94;
    *(uint32_t *)((uint8_t *)p + 0xb8) = a1;
    *(uint32_t *)((uint8_t *)p + 0xbc) = a2;
    *(uint32_t *)((uint8_t *)p + 0xc0) = a3;
    *(uint32_t *)((uint8_t *)p + 0xc4) = a4;
    func_020695e4(p, 1);
    return p;
}
