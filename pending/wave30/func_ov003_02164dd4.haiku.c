#include "ffc/types.h"

extern uint32_t func_0203c250(void);
extern uint32_t func_0203c2d0(void);
extern uint32_t func_02060558(void);
extern void func_0206047c(uint32_t);
extern void func_02060e88(uint32_t, uint32_t);
extern void func_02060ea4(uint32_t, uint32_t);

void func_ov003_02164dd4(void)
{
    uint32_t a = func_0203c250();
    uint32_t b = func_0203c2d0();
    uint32_t mode = func_02060558();

    if (mode - 2u > 1u) {
        return;
    }
    func_0206047c(b);
    if (mode == 2u) {
        func_02060e88(a, 1);
        func_02060ea4(a, 0x10);
        return;
    }
    if (mode == 3u) {
        func_02060e88(a, 2);
        func_02060ea4(a, 0x10);
    }
}
