#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern uint16_t func_ov003_021481c0(uint16_t);
extern uint32_t func_ov003_021464f4(uint32_t);
extern void func_ov003_02157b6c(uint32_t, uint16_t, uint8_t, uint32_t, uint16_t, uint32_t, uint8_t);
extern uint32_t func_020816d4(uint32_t, uint32_t);
extern void func_ov003_02158264(uint32_t, int32_t, uint32_t, uint32_t);
extern uint32_t func_02022e58(uint32_t);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_02056aec(void *);

void func_ov003_0216679c(uint8_t *self)
{
    uint32_t p;
    uint32_t r7;
    uint32_t r6;
    uint32_t v;
    int32_t t;
    uint32_t n;
    uint32_t a;
    uint16_t b;
    uint8_t c;
    uint16_t d;
    uint8_t e;

    p = func_020424e0(*(uint32_t *)(self + 0x80));
    *(uint16_t *)(self + 0x86) = func_ov003_021481c0(*(uint16_t *)(self + 0x86));
    if (*(uint16_t *)(self + 0x86) != 0) {
        r7 = func_ov003_021464f4(p);
        if (r7 != 0) {
            a = *(uint32_t *)(self + 0x8c);
            b = *(uint16_t *)(self + 0x8a);
            c = *(uint8_t *)(self + 0x84);
            d = *(uint16_t *)(self + 0x88);
            e = *(uint8_t *)(self + 0x85);
            func_ov003_02157b6c(r7, d, c, a, b, 0, e);
            r6 = func_020816d4(0x1000, 0xfff9c000);
            v = func_020816d4(0xfffff000, 0);
            t = (int32_t)(((1 << 14) - r6) * 360);
            func_ov003_02158264(r7, t >> 4, v, 1);
        }
    }
    n = func_02022e58(*(uint32_t *)(p + 0x178));
    func_02056bc0(self + 0x14, n);
    n = func_02056aec(self);
    func_02056bc0(self + 0x14, n);
}
