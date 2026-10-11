#include "ffc/types.h"

extern int32_t func_ov000_0215b5f8(void);
extern uint8_t *func_ov000_02163350(void);

int32_t func_ov000_021632f0(void)
{
    if (func_ov000_0215b5f8() != 0) {
        if (*(int32_t *)(func_ov000_02163350() + 0x61c) == 0xd ||
            *(int32_t *)(func_ov000_02163350() + 0x61c) == 0x16) {
            return 1;
        }
        return 0;
    }
    return 1;
}
