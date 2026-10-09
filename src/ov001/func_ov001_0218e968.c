#include "ffc/types.h"

extern void func_02069434(void *p, int32_t x);
extern uint8_t data_ov001_02194b60[];

void *func_ov001_0218e968(void *p)
{
    func_02069434(p, 0);
    *(uint8_t **)p = data_ov001_02194b60;
    return p;
}
