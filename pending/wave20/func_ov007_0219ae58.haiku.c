#include "ffc/types.h"

extern void func_02069670(void *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov007_0219ae58(uint8_t *p)
{
    func_02069670(p, *(uint32_t *)(p + 0xc0), 4, *(uint32_t *)(p + 0xcc));
    func_02069670(p, *(uint32_t *)(p + 0xcc), 2, *(uint32_t *)(p + 0xc0));
}
