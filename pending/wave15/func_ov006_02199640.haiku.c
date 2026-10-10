#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint8_t *data_ov006_021ba160;

void func_ov006_02199640(uint32_t a)
{
    func_02088978();
    *(uint32_t *)(data_ov006_021ba160 + 0x14e4) = a;
    func_0208898c();
}
