#include "ffc/types.h"

extern void func_020095b8(void *p);
extern void func_02005988(void *dst, const void *src);
extern uint8_t data_ov002_021d7124[];

void *func_ov002_021c28e0(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    func_020095b8(p0);
    *(uint32_t *)(p + 0xc) = 0x86;
    func_02005988(p + 0x10, data_ov002_021d7124);
    p[0x1c] = 0;
    return p;
}
