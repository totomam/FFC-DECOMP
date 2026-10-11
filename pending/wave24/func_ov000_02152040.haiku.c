#include "ffc/types.h"

extern uint32_t func_ov000_02152b68(void);
extern void func_ov000_02152ae4(uint32_t arg);
extern uint32_t func_ov000_02152068(void);
extern uint32_t func_ov000_02152134(void);

uint32_t func_ov000_02152040(void)
{
    uint32_t r = func_ov000_02152b68();
    func_ov000_02152ae4(0x10);
    switch (r) {
    case 7:
        r = func_ov000_02152068();
        break;
    case 8:
        r = func_ov000_02152134();
        break;
    }
    return r;
}
