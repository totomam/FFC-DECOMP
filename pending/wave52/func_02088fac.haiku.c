#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern void func_0208898c(uint32_t t);

uint32_t func_02088fac(uint32_t *p, uint32_t mask, uint32_t mode, uint32_t clr)
{
    uint32_t r6 = 0;
    uint32_t t = func_02088978();

    switch (mode) {
    case 0:
        while (mask != (p[0] & mask)) {
            func_02087024(&p[1]);
        }
        r6 = p[0];
        break;
    case 1:
        while ((p[0] & mask) == 0) {
            func_02087024(&p[1]);
        }
        r6 = p[0];
        break;
    default:
        break;
    }

    if (r6 != 0) {
        p[0] = p[0] & ~clr;
    }
    func_0208898c(t);
    return r6;
}
