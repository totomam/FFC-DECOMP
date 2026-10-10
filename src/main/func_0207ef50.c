#include "ffc/types.h"

extern void func_0207f4bc(void *p, uint32_t a, uint32_t b);

void func_0207ef50(uint8_t *p, uint16_t v)
{
    *(uint32_t *)(p + 0x30) = *(uint32_t *)(p + 8);
    *(uint16_t *)(p + 0x34) = v;
    *(uint16_t *)(p + 0x36) = 0;
    *(uint32_t *)(p + 0x38) = 0;
    func_0207f4bc(p, 2, 1);
}
