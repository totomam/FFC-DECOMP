#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02160f20(void);
extern void func_ov000_02160d04(int x);

void func_ov000_02160e88(void) {
    if (func_ov000_02163350()[0x15] == 2) {
        return;
    }
    if (func_ov000_02163350()[0x15] == 3) {
        return;
    }
    func_ov000_02160f20();
    func_ov000_02160d04(1);
}
