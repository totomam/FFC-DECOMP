#include "ffc/types.h"

extern uint32_t func_02064b40(void *obj);
extern uint32_t data_ov002_021d3a40[];
extern uint32_t data_ov002_021d3a60[];
extern uint32_t data_ov002_021d3a38[];

void func_ov002_0219b3e8(uint8_t *p, uint32_t x)
{
    uint32_t r7;
    uint32_t r4;
    uint32_t r5;
    uint32_t r0;
    void *obj;
    void **vt;

    r7 = (*(uint32_t *)(p + 0x88) == *(uint32_t *)(p + 0x84)) ? 1 : 0;
    r4 = (*(uint32_t *)(p + 0xa4) != 0) ? 1 : 0;
    r5 = (*(uint32_t *)(p + 0xa4) == x) ? 2 : 3;
    r0 = func_02064b40(*(void **)(p + 0x90));
    if (r5 == 2) {
        if (r0 == data_ov002_021d3a40[r4] || r0 == data_ov002_021d3a60[r4]) {
            r5 = 0;
        }
    }
    if (r7) {
        r5 += 4;
    }
    obj = *(void **)(p + 0x90);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj,
        *(uint32_t *)((uint8_t *)data_ov002_021d3a38 + (r5 << 3) + (r4 << 2)), 0);
}
