#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern uint32_t data_021419a4[];

uint32_t *func_0208a2a4(void) {
    uint32_t *r4;
    uint32_t r2;
    uint32_t x;

    x = func_02088978();
    r4 = (uint32_t *)data_021419a4[0];
    if (r4 == 0) {
        func_0208898c(x);
        return 0;
    }
    r2 = r4[0];
    data_021419a4[0] = r2;
    if (r2 == 0) {
        data_021419a4[4] = 0;
    }
    func_0208898c(x);
    return r4;
}
