#include "ffc/types.h"

extern void func_ov007_021b7798(uint8_t *p);

void func_ov007_021b7760(uint8_t *p, uint32_t v)
{
    if (v == *(uint32_t *)(p + 0xbc)) {
        *(uint32_t *)(*(uint32_t *)(p + 0xc4)) = 0;
        func_ov007_021b7798(p);
        return;
    }
    if (v == *(uint32_t *)(p + 0xc0)) {
        *(uint32_t *)(*(uint32_t *)(p + 0xc4)) = 1;
        func_ov007_021b7798(p);
    }
}
