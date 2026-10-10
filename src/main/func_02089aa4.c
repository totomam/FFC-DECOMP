#include "ffc/types.h"

extern void func_020891a8(uint32_t a, void (*cb)(void));
extern void func_02089ac0(void);
extern uint32_t data_02141970;

void func_02089aa4(void)
{
    func_020891a8(0x17, func_02089ac0);
    data_02141970 = 0;
}
