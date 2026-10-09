#include "ffc/types.h"

extern void func_02069434(void *p, int32_t x);
extern uint8_t data_ov007_021c2a68[];

void *func_ov007_0219b988(void *p)
{
    func_02069434(p, 0);
    *(uint8_t **)p = data_ov007_021c2a68;
    return p;
}
