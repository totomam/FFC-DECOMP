#include "ffc/types.h"

extern uint16_t func_ov002_021c85f8(uint8_t *p);
extern uint16_t func_ov002_021c85ec(uint8_t *p);
extern void func_ov002_021c8638(uint8_t *p, uint32_t v);

uint32_t func_ov002_021a309c(uint8_t *p)
{
    uint8_t *q = p + 0x144;
    uint32_t hi = func_ov002_021c85f8(q);
    uint32_t r = (hi << 16) | func_ov002_021c85ec(q);
    uint32_t v = func_ov002_021c85ec(q);
    func_ov002_021c8638(q, v + 1);
    return r;
}
