#include "ffc/types.h"

extern uint32_t func_ov002_021c85cc(void *p);
extern void func_ov002_021a1714(void *p, uint32_t v);

void func_ov002_021a1788(uint8_t *p, uint32_t v)
{
    uint32_t r = func_ov002_021c85cc(p + 0x144);
    func_ov002_021a1714(p, v + r);
}
