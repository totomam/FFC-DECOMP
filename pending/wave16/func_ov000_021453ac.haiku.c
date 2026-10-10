#include "ffc/types.h"

extern void func_020870e8(void);
extern void func_020871d8(void);
extern uint32_t data_ov000_0216bc60[];

void func_ov000_021453ac(void)
{
    if (((uint32_t *)((uint8_t *)data_ov000_0216bc60 + 0x24))[0] == 0) {
        func_020870e8();
    } else {
        func_020871d8();
    }
}
