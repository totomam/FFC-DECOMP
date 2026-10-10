#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

void func_ov000_0215dbbc(void)
{
    uint8_t *p = func_ov000_02163350();
    p[0x6d8] = 0xff;
    p = func_ov000_02163350();
    p[0x6d9] = 0;
}
