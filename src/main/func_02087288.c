#include "ffc/types.h"
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t data_021414f4[];
uint32_t func_02087288(void)
{
    uint32_t r;
    uint32_t n, m = func_02088978();
    n = data_021414f4[1];
    if (n < 0xFFFFFFFF) {
        data_021414f4[1] = n + 1;
        r = n;
    }
    func_0208898c(m);
    return r;
}
