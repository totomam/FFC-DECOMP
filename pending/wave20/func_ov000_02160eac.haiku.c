#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02160d04(int x);

int func_ov000_02160eac(void)
{
    func_ov000_02163350()[0x18] = 0;
    *(uint32_t *)(func_ov000_02163350() + 0x5dc) = 0;
    func_ov000_02163350()[0x629] = 0;
    func_ov000_02160d04(1);
    return 0;
}
