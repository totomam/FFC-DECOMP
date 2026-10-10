#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0216378c(uint8_t *p);

void func_ov000_0216376c(void)
{
    func_ov000_0216378c(func_ov000_02163350() + 0x554);
}
