#include "ffc/types.h"

extern uint16_t data_020b2944;
extern uint16_t data_0214136c;
extern void func_0208bcb4(void);

void func_02081978(void)
{
    uint32_t v = *(volatile uint32_t *)0x04000000;
    data_020b2944 = 0;
    data_0214136c = (uint16_t)((v & 0x30000) >> 16);
    *(volatile uint32_t *)0x04000000 = v & 0xfffcffff;
    func_0208bcb4();
}
