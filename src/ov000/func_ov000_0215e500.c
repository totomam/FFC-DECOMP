#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_02186630(void *p);
extern void func_ov000_02163bd0(void);
extern void func_ov000_0216335c(uint32_t a);
extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02161848(void);
extern void func_ov000_021633f0(void);
extern void func_ov000_02163758(void);
extern void func_ov000_0215e0d8(uint32_t a);
extern uint32_t data_ov000_0217020c[];

void func_ov000_0215e500(void) {
    if (func_ov000_02163350() != 0) {
        if (*(uint32_t *)(func_ov000_02163350() + 0x5e0) != 0) {
            if (data_ov000_0217020c[5] == 0) {
                func_ov001_02186630(*(void **)(func_ov000_02163350() + 0x5e0));
                *(uint32_t *)(func_ov000_02163350() + 0x5e0) = 0;
            } else {
                data_ov000_0217020c[4] = 1;
            }
        }
        func_ov000_02163bd0();
        func_ov000_0216335c(0);
        if (data_ov000_0217020c[3] != 0) {
            func_ov000_021591a8(4, data_ov000_0217020c[3], 0);
            data_ov000_0217020c[3] = 0;
        }
        func_ov000_02161848();
        *(func_ov000_02163350() + 0x4c) = 1;
        func_ov000_021633f0();
        func_ov000_02163758();
        *(uint32_t *)(func_ov000_02163350() + 0x7c4) = 1;
        func_ov000_0215e0d8(1);
    }
}
