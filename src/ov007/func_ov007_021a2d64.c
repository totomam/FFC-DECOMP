#include "ffc/types.h"

extern void func_02069434(void *p, int32_t x);
extern uint8_t data_ov007_021c3f68[];

void *func_ov007_021a2d64(void *p)
{
    func_02069434(p, 0);
    *(uint8_t **)p = data_ov007_021c3f68;
    return p;
}
