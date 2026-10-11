#include "ffc/types.h"

extern void func_ov011_021c9658(void *p);
extern void func_020697ac(void *p, uint32_t v);
extern void func_ov011_021c908c(void *p);

void func_ov011_021c8a6c(void *p)
{
    uint32_t idx;
    func_ov011_021c9658(p);
    idx = *(uint32_t *)((uint8_t *)p + 0x3a8);
    func_020697ac(p, *(uint32_t *)((uint8_t *)p + (idx << 2) + 0xfc));
    func_ov011_021c908c(p);
}
