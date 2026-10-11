#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_ov000_02148b24(uint32_t a);
extern void func_0208898c(uint32_t a);
extern uint32_t data_ov000_0216bcd0[2];

uint32_t func_ov000_0214e90c(uint32_t a)
{
    uint32_t r7 = func_02088978();
    uint32_t s0 = data_ov000_0216bcd0[0];
    uint32_t s1 = data_ov000_0216bcd0[1];
    uint32_t r;

    data_ov000_0216bcd0[0] = 0;
    data_ov000_0216bcd0[1] = 0;
    r = func_ov000_02148b24(a);
    data_ov000_0216bcd0[0] = s0;
    data_ov000_0216bcd0[1] = s1;
    func_0208898c(r7);
    return r;
}
