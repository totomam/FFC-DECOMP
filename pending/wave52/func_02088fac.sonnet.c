#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern void func_0208898c(uint32_t t);

uint32_t func_02088fac(volatile uint32_t *p, uint32_t mask, uint32_t mode, uint32_t clr)
{
    uint32_t r = 0;
    uint32_t t = func_02088978();

    switch (mode) {
    case 0:
        while (mask != (*p & mask)) {
            func_02087024((void*)(p + 1));
        }
        r = *p;
        break;
    case 1:
        while (!(*p & mask)) {
            func_02087024((void*)(p + 1));
        }
        r = *p;
        break;
    }
    if (r) {
        *p &= ~clr;
    }
    func_0208898c(t);
    return r;
}
