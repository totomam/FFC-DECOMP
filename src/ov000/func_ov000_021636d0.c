#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

uint8_t func_ov000_021636d0(void) {
    uint8_t k;
    int32_t i;
    if (*(int32_t *)(func_ov000_02163350() + 0x50) == 0x20) {
        return 0xff;
    }
    for (k = 0; k < 0x20; k++) {
        i = 0;
        if (*(int32_t *)(func_ov000_02163350() + 0x50) > 0) {
            do {
                if (func_ov000_02163350()[i * 0x28 + 0x6a] == k) {
                    break;
                }
                i++;
            } while (i < *(int32_t *)(func_ov000_02163350() + 0x50));
        }
        if (i == *(int32_t *)(func_ov000_02163350() + 0x50)) {
            return k;
        }
    }
    return 0xff;
}
