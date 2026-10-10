#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, int n);

void func_ov007_0219ae84(uint8_t *p)
{
    func_02069694(p, *(uint32_t *)(p + 0xc0), 4);
    func_02069694(p, *(uint32_t *)(p + 0xcc), 2);
}
