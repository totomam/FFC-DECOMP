#include "ffc/types.h"

extern void func_02043bf8(void *p, void *a, uint32_t b, uint32_t i, void *q);
extern void *func_020424e0(void *p);
extern void func_ov003_021463f8(void *p, int a, uint8_t b);
extern void func_020439ac(void *p);

void func_020439c8(uint8_t *p, void *a, uint32_t b, uint32_t *tbl, uint8_t c)
{
    uint32_t i;
    *(uint32_t *)(p + 0x118) = 0;
    *(uint32_t *)(p + 0x11c) = 0;
    for (i = 0; i < tbl[0]; i++) {
        uint32_t *offs = (uint32_t *)((uint8_t *)tbl + tbl[1]);
        func_02043bf8(p, a, b, i, (uint8_t *)tbl + offs[i]);
    }
    *(uint8_t *)(p + 0x165) = 0;
    *(uint32_t *)(p + 0x158) = 0;
    void *r = func_020424e0(p);
    func_ov003_021463f8(r, 1, c);
    func_020439ac(p);
}
