#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);

uint8_t *func_ov000_02163654(uint32_t p) {
    int32_t i = 0;
    if (*(int32_t *)(func_ov000_02163350() + 0x50) > 0) {
        do {
            if (*(uint32_t *)(func_ov000_02163350() + i * 0x28 + 0x54) == p) {
                return func_ov000_02163350() + 0x54 + i * 0x28;
            }
            i++;
        } while (i < *(int32_t *)(func_ov000_02163350() + 0x50));
    }
    return 0;
}
