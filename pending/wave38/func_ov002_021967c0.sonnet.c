#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t a, uint32_t b);
extern void func_02087620(void *object);
extern uint8_t data_020ae6d4[];
extern uint8_t data_ov002_021d4818[];
extern uint8_t data_ov002_021d4830[];

void *func_ov002_021967c0(uint8_t *p0, uint32_t p1, uint32_t p2)
{
    uint32_t *z;
    uint32_t *w; uint32_t zero = 0;

    func_02056c9c(p0, 0, p2);
    z = (uint32_t *)(p0 + 0x80);
    *(uint8_t **)z = data_020ae6d4;
    w = z + 4;
    z[1] = zero;
    z[2] = zero;
    z[3] = zero;
    z[4] = zero;
    w[1] = zero;
    w[2] = zero;
    func_02087620(z + 7);
    *(uint8_t **)p0 = data_ov002_021d4818;
    *(uint8_t **)(p0 + 0x80) = data_ov002_021d4830;
    *(uint32_t *)(p0 + 0xb8) = p1;
    *(uint32_t *)(p0 + 0xbc) = zero;
    *(uint32_t *)(p0 + 0xc0) = zero;
    *(uint32_t *)(p0 + 0xc4) = p2;
    return p0;
}
