#include "ffc/types.h"

#define REG(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

extern void func_0207ca88(void);
extern uint32_t func_0207cbe4(void);
extern void func_02088f30(void);
extern void func_0207cd8c(uint8_t *base, uint32_t one, uint32_t a, uint32_t b);
extern uint32_t func_0207ce28(uint32_t a);
extern uint32_t func_0207d830(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02088978(void);
extern void func_0207ce64(uint32_t a, uint32_t b, uint32_t c);
extern void func_0207ce78(uint32_t a, uint32_t b, uint32_t c);
extern void func_0208898c(uint32_t a);
extern void func_0207d7b8(uint8_t *p);
extern void func_0207da80(void);
extern void func_0207cd00(void (*fn)(void), uint32_t a);
extern void func_0207d80c(void);
extern uint32_t func_0207d67c(void);
extern void func_0207d8b0(void);

extern uint8_t data_021407c0[];
extern uint8_t data_02140e00[];
extern uint8_t data_02140e10[];
extern uint32_t data_020b2924;

void func_0207d8ec(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                   uint32_t a4, uint32_t a5, uint32_t a6)
{
    uint8_t *base = data_021407c0;
    uint8_t *g = data_02140e00;
    uint32_t r;
    uint32_t sum;
    uint32_t tmp;

    func_0207ca88();
    if ((func_0207cbe4() & 4) == 0) {
        func_02088f30();
    }
    func_0207cd8c(base, 1, a4, a5);

    r = func_0207ce28(a0);
    REG(base, 0x50c) = r;
    if (r != 0) {
        r = 3;
        r &= a0;
    } else {
        r = 1;
        r -= 2;
    }
    REG(base, 0x508) = r;
    if (r <= 3) {
        uint8_t *p = (uint8_t *)REG(base, 0x50c);
        void (*fp)(void) = (void (*)(void))REG(p, 4);
        fp();
    }

    sum = a1 + REG(g, 0);
    REG(base, 0x4fc) = sum;
    REG(base, 0x500) = a2;
    REG(base, 0x504) = a3;

    REG(g, 0x14) = (uint32_t)func_0207d80c;
    REG(g, 0x18) = 0;
    REG(g, 0x1c) = sum;
    REG(g, 0x20) = a2;
    REG(g, 0x24) = a3;
    REG(g, 0x28) = 0;

    if (REG(g, 4) == (uint32_t)func_0207d67c) {
        tmp = func_0207d830(REG(base, 0x508), a2, sum, a3);
        if (tmp != 0) {
            uint32_t ret = func_02088978();
            if (REG(g, 8) != 0) {
                func_0207ce64(REG(base, 0x500), REG(base, 0x504), REG(base, 0xc));
            }
            if (data_020b2924 != 0) {
                func_0207ce78(REG(base, 0x500), REG(base, 0x504), REG(base, 0x10));
            }
            func_0208898c(ret);
            func_0207d7b8(data_02140e10);
            if (a6 == 0) {
                func_0207da80();
            }
            return;
        }
    }

    if (REG(g, 8) != 0) {
        func_0207ce64(REG(base, 0x500), REG(base, 0x504), REG(base, 0xc));
    }
    func_0207cd00(func_0207d8b0, a6);
}
