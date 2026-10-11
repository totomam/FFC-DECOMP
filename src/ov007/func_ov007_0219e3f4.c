#include "ffc/types.h"

extern uint32_t data_0213e098;
extern uint32_t func_02055058(uint32_t);
extern void func_01ff8be8(void *);

void func_ov007_0219e3f4(void *p)
{
    uint32_t r;
    r = func_02055058(data_0213e098);
    *(uint32_t *)((uint8_t *)p + 0x88) += r;
    func_01ff8be8(p);
}
