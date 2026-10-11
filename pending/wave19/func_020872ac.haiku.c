#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021414f4[];

uint32_t func_020872ac(void) {
    uint32_t r4;
    uint32_t r3;
    uint32_t r2;
    uint32_t *p;
    func_02088978();
    p = data_021414f4;
    r4 = 0;
    r3 = p[1];
    if (r3 != 0) {
        r2 = r3 - 1;
        p[1] = r2;
        r4 = r3;
    }
    func_0208898c();
    return r4;
}
