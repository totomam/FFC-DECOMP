#include "ffc/types.h"

extern void func_02004eb0(uint32_t x);
extern uint32_t func_0207d454(void);
extern void func_02087874(uint32_t a, uint32_t b);
extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_020878d0(void);
extern uint32_t func_0207ced8(uint8_t *p, uint32_t a, uint32_t b);
extern uint32_t *data_021407c0;
extern uint8_t data_02140d00[];

#define F(off) (*(uint32_t *)(p + (off)))
#define SUB (*(uint8_t **)p)

void func_0207cfac(uint8_t *p)
{
    uint32_t r5, r6, sp8, sp4, sp0;

    sp8 = F(0x510);
    r6 = F(0x518);
    sp4 = F(0x514);
    sp0 = 0x100;
    func_02004eb0(0x2005050);
    if (sp8 == 0xb) {
        sp0 = func_0207d454();
    } else if (sp8 == 0xf) {
        sp0 = data_021407c0[8];
    }

    do {
        r5 = F(0x504);
        if (sp0 < r5) {
            r5 = sp0;
        }
        *(uint32_t *)(SUB + 0x14) = r5;
        if (*(volatile uint32_t *)(p+4) & 0x40) {
            F(4) &= ~0x40;
            *(uint32_t *)SUB = 7;
            return;
        }
        switch (r6) {
        case 0:
            func_02087874((uint32_t)data_02140d00, r5);
            *(uint32_t *)(SUB + 0xc) = F(0x4fc);
            *(uint32_t *)(SUB + 0x10) = (uint32_t)data_02140d00;
            break;
        case 1:
        case 2:
            func_02084ca4(F(0x4fc), (uint32_t)data_02140d00, r5);
            func_020878ac((uint32_t)data_02140d00, r5);
            func_020878d0();
            *(uint32_t *)(SUB + 0xc) = (uint32_t)data_02140d00;
            *(uint32_t *)(SUB + 0x10) = F(0x500);
            break;
        case 3:
            *(uint32_t *)(SUB + 0xc) = F(0x4fc);
            *(uint32_t *)(SUB + 0x10) = F(0x500);
            break;
        }
        if (!func_0207ced8(p, sp8, sp4)) {
            break;
        }
        if (r6 == 2) {
            if (!func_0207ced8(p, 9, 1)) {
                break;
            }
        } else if (r6 == 0) {
            func_02084ca4((uint32_t)data_02140d00, F(0x500), r5);
        }
        F(0x4fc) += r5;
        F(0x500) += r5;
        F(0x504) -= r5;
    } while (F(0x504) != 0);
}
