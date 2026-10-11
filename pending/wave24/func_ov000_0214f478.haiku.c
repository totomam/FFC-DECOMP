#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_ov000_0216e214[];

int func_ov000_0214f478(void)
{
    uint32_t *r2;
    uint8_t *r3;

    func_02088978();
    r2 = data_ov000_0216e214;
    r3 = (uint8_t *)r2[1];
    if (r3 == 0) {
        func_0208898c();
        return 1;
    }
    if (r3[0x12de] != 1) {
        func_0208898c();
        return 1;
    }
    r2[1] = 0;
    func_0208898c();
    return 0;
}
