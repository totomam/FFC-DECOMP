#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02163780(uint8_t *p);

void func_ov000_02163758(void)
{
    func_ov000_02163780(func_ov000_02163350() + 0x554);
}
