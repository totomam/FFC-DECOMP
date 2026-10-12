#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_0215999c(uint8_t v);

int func_ov000_02161880(uint32_t x) {
    int32_t i;
    if (*(int32_t *)(func_ov000_02163350() + 0x68c) == 0) {
        return 0;
    }
    i = 0;
    if (*(int32_t *)(func_ov000_02163350() + 0x6d4) > 0) {
        do {
            int32_t r = func_ov000_0215999c(*(uint8_t *)(func_ov000_02163350() + 0x694 + i));
            if (r > 0 && r == (int32_t)x) {
                return 1;
            }
            i++;
        } while (i < *(int32_t *)(func_ov000_02163350() + 0x6d4));
    }
    return 0;
}
