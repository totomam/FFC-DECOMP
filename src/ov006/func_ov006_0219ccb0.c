#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern int func_ov006_0219cb94(void);
extern void func_ov006_0219cbc4(uint8_t *p, int a, uint32_t b, int c);
extern uint8_t *data_ov006_021ba1c4;

void func_ov006_0219ccb0(uint32_t a)
{
    uint32_t r = func_02088978();
    if (func_ov006_0219cb94()) {
        func_ov006_0219cbc4(data_ov006_021ba1c4 + 0xc4, 0, a, 0);
    }
    func_0208898c(r);
}
