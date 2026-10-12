#include "ffc/types.h"

extern void func_02088f30(void);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern void func_020883ec(uint32_t *p, uint32_t x, uint32_t y);

void func_020884fc(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t s5, uint32_t s6, uint32_t s7)
{
    volatile uint32_t irq;
    volatile uint32_t ss = s5;
    volatile uint32_t cc = c;

    if (p == 0 || p[0] != 0) {
        func_02088f30();
    }
    irq = func_02088978();
    p[7] = cc;
    p[8] = ss;
    p[9] = a;
    p[0] = s6;
    p[10] = b;
    p[1] = s7;
    func_020883ec(p, 0, 0);
    func_0208898c(irq);
}
