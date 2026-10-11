#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021a16fc(void *p);
extern uint32_t func_ov002_021c85f8(void *p);
extern void func_02055914(void *a, void *b);
extern uint8_t data_020aba18[];

void func_ov002_021a1350(uint8_t *a, uint32_t b)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x1c);
    if (p) {
        uint32_t r7 = func_ov002_021a16fc(a);
        uint32_t r0 = func_ov002_021c85f8(a + 0x144);
        p[2] = 0;
        p[3] = 0x100ea;
        p[0] = (uint32_t)data_020aba18;
        p[4] = b;
        p[5] = r0;
        p[6] = r7;
    }
    func_02055914(*(void **)(a + 0xf0), p);
}
