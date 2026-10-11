#include "ffc/types.h"

extern void func_ov002_021c8f40(void *p);

void *func_ov002_021c9084(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    int i;

    func_ov002_021c8f40(p0);
    for (i = 0; i < 2; i++) {
        *(uint32_t *)(p + 0x30 + i * 4) = 0;
    }
    return p0;
}
