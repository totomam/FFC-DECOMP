#include "ffc/types.h"

extern void *func_ov000_02163654(void);
extern void *func_ov000_02163608(void);
extern int func_ov000_0215b6a0(uint8_t v);

int func_ov000_0216372c(void)
{
    uint8_t *p = (uint8_t *)func_ov000_02163654();
    if (p == 0) {
        return 0;
    }
    if (p == (uint8_t *)func_ov000_02163608()) {
        return 0;
    }
    if (func_ov000_0215b6a0(p[0x16]) != 0) {
        return 0;
    }
    return 1;
}
