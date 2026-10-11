#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021419a4;

uint32_t func_0208a1d8(void) {
    uint32_t *p;
    uint32_t n;
    func_02088978();
    p = (uint32_t *)data_021419a4;
    n = 0;
    if (p != 0) {
        do {
            p = (uint32_t *)*p;
            n++;
        } while (p != 0);
    }
    func_0208898c();
    return n;
}
