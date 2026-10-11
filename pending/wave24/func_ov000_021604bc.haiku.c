#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_021603ec(uint8_t *p, int mode);

void func_ov000_021604bc(uint8_t *p) {
    int mode = 2;
    if (func_ov000_02163350()[0x15] == 0 || func_ov000_02163350()[0x15] == 1) {
        if (func_ov000_02163350()[0xd] == 0) {
            mode = 1;
        }
    }
    func_ov000_021603ec(p, mode);
}
