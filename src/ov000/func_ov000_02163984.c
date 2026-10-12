#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_0215b5f8(void);
extern int func_ov000_02163974(void);

int func_ov000_02163984(void) {
    if (*(uint32_t *)(func_ov000_02163350() + 0x7d4) == 0) {
        return 0;
    }
    if (func_ov000_0215b5f8() != 0) {
        if (func_ov000_02163350()[0x15] == 1 ||
            func_ov000_02163350()[0x15] == 3 ||
            func_ov000_02163350()[0x15] == 2) {
            if (func_ov000_02163974() == 0) {
                return 1;
            }
        }
    }
    return 0;
}
