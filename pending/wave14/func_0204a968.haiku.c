#include "ffc/types.h"

extern void func_02088e8c(void *p);
extern void func_ov000_0214b0e0(void *p, uint32_t n);
extern uint8_t data_02139d4c[];

void func_0204a968(void)
{
    func_02088e8c(data_02139d4c);
    func_ov000_0214b0e0(data_02139d4c, 0x20);
}
