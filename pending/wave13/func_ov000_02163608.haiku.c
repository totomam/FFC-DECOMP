#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02163654(uint32_t v);

void func_ov000_02163608(void)
{
    func_ov000_02163654(*(uint32_t *)(func_ov000_02163350() + 0x678));
}
