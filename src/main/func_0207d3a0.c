#include "ffc/types.h"

extern void func_02004eb0(uint32_t x);
extern void func_0207ca88(void);
extern uint32_t func_0207cbe4(void);
extern void func_02088f30(void);
extern void func_0207cd8c(void *p, uint32_t one, uint32_t b, uint32_t c);
extern uint8_t data_021407c0[];

void func_0207d3a0(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r;
    func_02004eb0(0x2005050);
    func_0207ca88();
    r = func_0207cbe4();
    r &= a;
    if (a != r) {
        func_02088f30();
    }
    func_0207cd8c(data_021407c0, 1, b, c);
}
