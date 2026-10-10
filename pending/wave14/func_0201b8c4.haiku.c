#include "ffc/types.h"

extern void func_0201b0cc(void *p);

void func_0201b8c4(void *p, uint32_t v)
{
    uint8_t *q = *(uint8_t **)((uint8_t *)p + 0x3c);
    uint32_t r = *(uint32_t *)(q + 0x38);
    r = (r & 0x87ffffff) | ((v << 28) >> 1);
    *(uint32_t *)(q + 0x38) = r;
    func_0201b0cc(p);
}
