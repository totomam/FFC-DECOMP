#include "ffc/types.h"

extern int32_t func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int32_t idx);
extern uint8_t *func_ov000_02163350(void);

int32_t func_ov000_0216195c(int32_t a) {
    int32_t r4 = 0;
    int32_t i = 1;
    if (func_ov000_02163408() > 1) {
        do {
            r4 |= 1 << func_ov000_02163634(i)[0x16];
            i++;
        } while (i < func_ov000_02163408());
    }
    if (a == 0) {
        r4 |= 1 << func_ov000_02163350()[0x56a];
    }
    return r4;
}
