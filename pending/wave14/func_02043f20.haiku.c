#include "ffc/types.h"

extern void func_02043f40(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_020af698[];

void func_02043f20(void *p, uint32_t x)
{
    uint32_t *q;
    uint32_t flag;
    flag = 1;
    ((uint8_t *)p)[0x15c] = 1;
    q = data_020af698;
    func_02043f40(p, *q++, *q++, x, flag);
}
