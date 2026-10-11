#include "ffc/types.h"

extern void *func_ov002_021a5218(void *p, uint32_t i);
extern void func_ov002_021c8688(uint32_t v);

void func_ov002_021c8770(void *p)
{
    uint32_t i;
    for (i = 0; i < *(uint32_t *)((uint8_t *)p + 4); i++) {
        uint32_t *q = (uint32_t *)func_ov002_021a5218(p, i);
        func_ov002_021c8688(*q);
    }
}
