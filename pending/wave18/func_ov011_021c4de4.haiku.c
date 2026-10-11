#include "ffc/types.h"

extern void func_ov011_021c4ba0(void *self, int flag);

void func_ov011_021c4de4(void *self, uint32_t val, uint32_t flags, uint32_t mode)
{
    if (mode != 0) {
        return;
    }
    if (flags & 2) {
        return;
    }
    {
        uint32_t *p = *(uint32_t **)((uint8_t *)self + 0xb8);
        p[1] = val;
    }
    func_ov011_021c4ba0(self, 1);
}
