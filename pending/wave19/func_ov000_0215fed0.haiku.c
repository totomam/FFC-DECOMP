#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void *p);
extern void func_ov000_02161a1c(void *p);
extern void func_ov000_021619c8(void *p);

void func_ov000_0215fed0(void *p) {
    if (func_ov000_02163350(p)[0x15] == 0) {
        func_ov000_02161a1c(p);
        return;
    }
    func_ov000_021619c8(p);
}
