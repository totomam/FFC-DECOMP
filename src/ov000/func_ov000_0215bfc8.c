#include "ffc/types.h"

extern int32_t func_ov000_02159000(void);
extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_0215b594(void);

int32_t func_ov000_0215bfc8(void)
{
    if (func_ov000_02159000()) {
        return 0;
    }
    if (func_ov000_02163350() == 0 || func_ov000_0215b594() != 4 ||
        func_ov000_02163350()[0x62a] != 0) {
        return 0;
    }
    return 1;
}
