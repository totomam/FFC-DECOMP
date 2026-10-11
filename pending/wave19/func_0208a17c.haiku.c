#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_021419a4[];

uint32_t func_0208a17c(void) {
    uint32_t *p;
    uint32_t r;
    func_02088978();
    p = data_021419a4;
    if (p[2] == 0) {
        r = p[1];
    } else {
        r = p[8];
    }
    func_0208898c();
    return r;
}
