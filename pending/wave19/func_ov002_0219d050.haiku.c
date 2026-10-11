#include "ffc/types.h"

extern uint8_t data_ov002_021d4fd0;
extern void func_02059538(void *p, uint32_t v);
extern void func_02062868(void *p);

void *func_ov002_0219d050(void *a0)
{
    uint8_t *r4 = (uint8_t *)a0;
    *(void **)r4 = (void *)&data_ov002_021d4fd0;
    if (*(void **)(r4 + 0x1c) != 0) {
        func_02059538(*(void **)(r4 + 0x1c), *(uint32_t *)(r4 + 0x20));
    }
    func_02062868(r4);
    return r4;
}
