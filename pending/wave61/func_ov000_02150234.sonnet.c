#include "ffc/types.h"
extern uint8_t *func_ov000_0214fa54(void);
extern void func_02088978(void);
extern void func_0208898c(void);
uint8_t *func_ov000_02150234(void)
{
    uint8_t *r = 0;
    uint8_t *p = func_ov000_0214fa54();
    func_02088978();
    if (p != 0 && p[0x12de] == 9 && p[0x12dd] == 0) {
        r = p + 0x12e4;
    }
    func_0208898c();
    return r;
}
