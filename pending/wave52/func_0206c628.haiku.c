#include "ffc/types.h"

extern uint8_t data_020b1ea4[];
extern uint8_t data_020b1eb8[];
extern uint32_t data_0213e178;
extern void func_02087840(void);
extern void func_02056858(uint32_t x);
extern void func_02056844(void *p);
extern void func_02053574(uint32_t x);
extern void func_0206c1dc(void *p);
extern void func_02055abc(void *p);

#define FIELD(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

uint8_t *func_0206c628(uint8_t *a) {
    uint8_t *r5;
    FIELD(a, 0) = (uint32_t)data_020b1ea4;
    FIELD(a, 0x14) = (uint32_t)data_020b1eb8;
    func_02087840();
    r5 = (uint8_t *)FIELD(a, 0x3220);
    if (r5 != 0) {
        func_02056858(FIELD(r5, 0x88));
        func_02056858(FIELD(r5, 0x8c));
        func_02056844(r5);
    }
    data_0213e178 = 0;
    func_02053574(FIELD(a, 0x54));
    func_02056858(FIELD(a, 0xf7c));
    func_02056858(FIELD(a, 0xf78));
    func_02056858(FIELD(a, 0x3204));
    func_02056858(FIELD(a, 0x3208));
    func_02056858(FIELD(a, 0x3210));
    func_02056858(FIELD(a, 0x3214));
    func_0206c1dc(a + 0x3d);
    func_02055abc(a + 0x14);
    func_02056844(a);
    return a;
}
