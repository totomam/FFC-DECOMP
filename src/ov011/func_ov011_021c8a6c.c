#include "ffc/types.h"

extern void func_ov011_021c9658(void *p);
extern void func_020697ac(void *p, uint32_t v);
extern void func_ov011_021c908c(void *p);

void func_ov011_021c8a6c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t idx;
    uint32_t v;

    func_ov011_021c9658(self);
    idx = *(uint32_t *)(p + 0x3a8);
    v = *(uint32_t *)(p + (idx << 2) + 0xfc);
    func_020697ac(self, v);
    func_ov011_021c908c(self);
}
