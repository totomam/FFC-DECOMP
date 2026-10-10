#include "ffc/types.h"

extern void func_02081ed0(void *p, uint32_t n, uint32_t v);

void func_02023038(uint8_t *p, uint32_t idx, uint16_t v)
{
    uint32_t off = 0x18c;
    *(uint16_t *)(p + idx * 2 + off) = v;
    func_02081ed0(p + off, off, v);
}
