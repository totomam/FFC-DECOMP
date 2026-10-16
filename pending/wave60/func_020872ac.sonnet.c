#include "ffc/types.h"
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern struct { uint32_t a; uint32_t n; } data_021414f4;
uint32_t func_020872ac(void) {
    uint32_t r;
    uint32_t n;
    uint32_t t = func_02088978();
    r = 0;
    n = data_021414f4.n;
    if (n != 0) {
        data_021414f4.n = n - 1;
        r = n;
    }
    func_0208898c(t);
    return r;
}
