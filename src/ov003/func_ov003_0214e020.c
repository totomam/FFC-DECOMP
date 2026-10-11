#include "ffc/types.h"

extern void *func_ov003_021464f4(uint32_t a, uint16_t b);
extern void *func_02056aec(void *obj);
extern void *func_ov003_0215b024(void *node);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0214e020(uint8_t *p)
{
    void *r4;
    void *r6;
    void *r1;

    r4 = func_ov003_021464f4(*(uint32_t *)(p + 0x80), *(uint16_t *)(p + 0x84));
    if (r4 == 0) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }
    r6 = func_02056aec(p);
    r1 = func_ov003_0215b024(r4);
    {
        uint8_t *q = p + 0x14;
        func_02056bc0(q, r1);
        func_02056bc0(q, r6);
    }
}
