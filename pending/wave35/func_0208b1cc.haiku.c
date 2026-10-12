#include "ffc/types.h"

extern uint32_t data_02143570;
extern uint32_t data_020b2ba4;
extern int32_t func_020889dc(void);
extern int32_t func_020889d0(void);
extern void func_02089280(void);

void func_0208b1cc(void)
{
    uint32_t *flag = &data_02143570;
    if (*flag == 0) {
        return;
    }
    do {
        if (((data_020b2ba4 & 2) && func_020889dc() == 0x12) ||
            ((data_020b2ba4 & 4) && func_020889d0() == 0x80) ||
            ((data_020b2ba4 & 8) && *(volatile uint16_t *)0x4000208 == 0)) {
            func_02089280();
        }
    } while (*flag != 0);
}
