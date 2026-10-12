#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t func_ov000_0214ece8(void *p);
extern uint32_t func_ov000_0214ecc8(void *p);

uint32_t func_ov000_0214e448(void *p)
{
    uint32_t h;

    if ((int32_t)p <= 0) {
        return 0;
    }
    h = func_02088978();
    if (func_ov000_0214ece8(p)) {
        func_0208898c(h);
        return 0;
    }
    if (func_ov000_0214ecc8(p)) {
        func_0208898c(h);
        return 1;
    }
    if (*(int16_t *)((uint8_t *)p + 0xac) & 0x10) {
        func_0208898c(h);
        return 0;
    }
    func_0208898c(h);
    return 1;
}
