#include "ffc/types.h"

extern uint32_t func_0209a4cc(uint32_t x);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(float a, uint32_t b);
extern uint32_t func_0209ab90(uint32_t x);
extern uint32_t func_0205e7ac(uint32_t x);
extern void func_0205827c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint8_t data_ov003_021d4fa4[];
extern uint8_t data_ov003_021d4f90[];

void func_ov003_021776b4(uint8_t *p)
{
    uint32_t t;
    uint32_t v;
    uint32_t r7;
    uint32_t r4;
    uint8_t *r6;
    uint32_t s;
    uint8_t f;

    *(uint32_t *)(p + 0x88) = *(uint32_t *)(p + 0x88) + 1;
    t = func_0209a4cc(*(uint32_t *)(p + 0x88));
    v = func_0209a4cc(*(uint32_t *)(p + 0x84));
    v = func_0209b5bc(t, v);
    r7 = func_0209af28(10.0f, v);

    f = p[0x8c];
    r6 = (f != 0) ? data_ov003_021d4fa4 : data_ov003_021d4f90;

    r4 = 6;
    if (f == 0) {
        if ((16 - func_0209ab90(r7)) >= 6) {
            r4 = 16 - func_0209ab90(r7);
        }
    }

    s = func_0205e7ac(*(uint32_t *)(p + 0x80));
    func_0205827c(s, r6, r4, func_0209ab90(r7));

    if (*(uint32_t *)(p + 0x88) >= *(uint32_t *)(p + 0x84)) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
