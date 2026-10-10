#include "ffc/types.h"

extern void func_ov002_021967c0(void *p);
extern uint8_t data_ov002_021d78ec[];
extern uint8_t data_ov002_021d7904[];

void *func_ov002_021d30f0(void *p)
{
    func_ov002_021967c0(p);
    *(void **)p = data_ov002_021d78ec;
    *(void **)((uint8_t *)p + 0x80) = data_ov002_021d7904;
    return p;
}
