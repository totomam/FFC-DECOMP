#include "ffc/types.h"

extern void func_0201b0cc(void *p);

void func_0201b8ec(uint8_t *a, uint32_t b)
{
    uint32_t *r2 = *(uint32_t **)(a + 0x3c);
    r2[0xf] = (r2[0xf] & ~0xfu) | (b & 0xfu);
    func_0201b0cc(a);
}
