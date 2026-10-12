#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern uint32_t func_ov000_021506a4(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02087460(void);
extern uint32_t func_021dae28(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov000_0216e214[];

uint32_t func_ov000_0214f618(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r4;
    uint32_t h = func_02088978();
    uint8_t *p = (uint8_t *)data_ov000_0216e214[1];

    if (p == 0) {
        func_0208898c(h);
        return 1;
    }
    switch (p[0x12df]) {
    case 1:
        r4 = func_ov000_021506a4(a, b, c);
        break;
    case 2:
        if (func_02087460() != 0) {
            r4 = func_021dae28(a, b, c);
            break;
        }
    default:
        r4 = 7;
        break;
    }
    func_0208898c(h);
    return r4;
}
