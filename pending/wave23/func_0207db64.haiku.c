#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0207dab4(uint32_t a, uint32_t b, uint32_t c);
extern void func_0208898c(uint32_t a);

void func_0207db64(uint32_t a0)
{
    volatile uint32_t v = *(uint32_t *)0x2fffc00;
    if (a0 != v) {
        uint32_t r = func_02088978();
        func_0207dab4(0xe, 0x11, 0);
        func_0208898c(r);
    }
}
