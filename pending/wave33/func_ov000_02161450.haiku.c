#include "ffc/types.h"

extern int32_t func_ov000_021633a8(void);
extern int32_t func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int32_t idx);
extern void func_ov000_02161084(uint32_t val, uint32_t arg);
extern int32_t func_ov000_0216376c(void);
extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0216335c(uint32_t val);

void func_ov000_02161450(void) {
    if (func_ov000_021633a8() == 2) {
        int32_t i;
        for (i = 1; i < func_ov000_02163408(); i++) {
            uint8_t *p = func_ov000_02163634(i);
            func_ov000_02161084(p[0x16], 4);
        }
        if (func_ov000_0216376c() != 0) {
            uint8_t *q = func_ov000_02163350();
            func_ov000_02161084(q[0x56a], 4);
        }
        func_ov000_0216335c(0x14);
    }
}
