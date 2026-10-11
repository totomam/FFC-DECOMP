#include "ffc/types.h"

extern int32_t func_ov000_0215bfc8(void);
extern void func_ov000_02160aa4(void);
extern uint8_t *func_ov000_02163350(void);

int32_t func_ov000_0215bf9c(void)
{
    int32_t r4;
    if (func_ov000_0215bfc8()) {
        func_ov000_02160aa4();
        r4 = 1;
    } else {
        func_ov000_02163350();
        r4 = 0;
    }
    uint8_t *p = func_ov000_02163350();
    p[0x7b5] = 0;
    return r4;
}
