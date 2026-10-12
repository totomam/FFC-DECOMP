#include "ffc/types.h"

extern uint32_t func_ov000_0215573c(void);
extern void func_ov000_02155770(uint32_t *p);
extern void func_ov000_021556d4(void);
extern void func_ov000_02155e98(void);
extern int func_ov000_02155558(void *a, void *b);
extern uint32_t data_ov000_0216e2d0[];
extern uint32_t data_ov000_0216e318[];
extern uint32_t data_ov000_0216e2b4[];

void func_ov000_02155f28(void) {
    uint32_t buf[0xE2];
    uint32_t r;
    uint32_t val;

    r = func_ov000_0215573c();
    if (r == 0x15) {
        func_ov000_02155770(&buf[0x71]);
        if (buf[0x71] == 0x4e22) {
            func_ov000_021556d4();
            func_ov000_02155e98();
            if (func_ov000_02155558(data_ov000_0216e2d0, data_ov000_0216e318) == 0) {
                return;
            }
            val = 0xffffb17c;
        } else {
            data_ov000_0216e2b4[0] = 1;
            data_ov000_0216e2b4[2] = 1;
            return;
        }
    } else {
        if (r == 0) {
            return;
        }
        func_ov000_02155770(&buf[0]);
        func_ov000_021556d4();
        val = buf[0];
    }
    data_ov000_0216e2b4[0] = 1;
    data_ov000_0216e2b4[2] = 0;
    data_ov000_0216e2b4[1] = val;
}
