#include "ffc/types.h"

extern uint8_t data_ov000_0216bc60;
extern int32_t func_ov000_02147ef8(void);
extern void func_ov000_0214530c(int32_t);

void func_ov000_02147f4c(void) {
    uint8_t *base = &data_ov000_0216bc60;
    void (*fp)(void) = *(void (**)(void))(base + 0x28);
    fp();
    if (*(int32_t *)(base + 0x50) != 0) {
        if (func_ov000_02147ef8() == 0) {
            func_ov000_0214530c(4);
        }
    }
}
