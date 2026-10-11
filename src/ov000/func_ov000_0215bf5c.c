#include "ffc/types.h"

extern uint8_t func_ov000_0215b5a8(void);
extern uint8_t *func_ov000_02163634(uint32_t arg);

uint8_t func_ov000_0215bf5c(void)
{
    uint8_t r = func_ov000_0215b5a8();
    if (r == 0xff) {
        uint8_t *p = func_ov000_02163634(0);
        if (p != 0) {
            r = p[0x16];
        }
    }
    return r;
}
