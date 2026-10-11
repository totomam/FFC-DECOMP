#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_021832d4(uint32_t v);
extern void func_ov001_02182a18(void);
extern uint32_t data_ov000_0217020c[];

void func_ov000_02163bd0(void) {
    func_ov001_021832d4(*(uint32_t *)(func_ov000_02163350() + 0x618));
    if (data_ov000_0217020c[0] == 0) {
        func_ov001_02182a18();
        return;
    }
    data_ov000_0217020c[2] = 1;
}
