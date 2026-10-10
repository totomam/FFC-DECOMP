#include "ffc/types.h"

extern void func_02088978(uint32_t a, uint32_t b);
extern void func_0208898c(void);
extern uint32_t data_ov006_021ba0a8[];

void func_ov006_0219b48c(uint32_t a, uint32_t b)
{
    func_02088978(a, b);
    data_ov006_021ba0a8[5] = a;
    data_ov006_021ba0a8[4] = b;
    func_0208898c();
}
