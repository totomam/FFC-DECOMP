#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

int func_ov000_021633b4(void)
{
    int32_t v = *(int32_t *)(func_ov000_02163350() + 0x7b0);
    if (v == 1) {
        return 0;
    }
    return 1;
}
