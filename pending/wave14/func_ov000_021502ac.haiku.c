#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t p);
extern void func_0208898c(uint32_t v);
extern uint8_t data_ov000_0216e21c[];

void func_ov000_021502ac(uint32_t p)
{
    uint32_t r = func_02088978(p);
    *(uint32_t *)(data_ov000_0216e21c + 0x28) = p;
    func_0208898c(r);
}
