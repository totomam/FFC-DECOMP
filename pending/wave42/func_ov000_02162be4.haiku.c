#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void *func_ov000_02162b68(void);
extern uint8_t *func_ov000_02163608(void);
extern void func_ov000_0216335c(int32_t x);
extern void func_ov000_02163384(int32_t x);
extern void func_ov000_0215e0d8(int32_t x);
extern void func_ov000_021619c8(void);

void func_ov000_02162be4(void *param)
{
    uint8_t *s;
    int32_t mode;

    if (param != 0) {
        s = func_ov000_02163350();
        *(void **)(s + 0x790) = func_ov000_02162b68();
        func_ov000_02163608()[0x16] = 0;
        *(uint32_t *)(func_ov000_02163350() + 0x7c4) = 1;
    }

    func_ov000_02163350()[0x14] = 2;
    func_ov000_0216335c(13);
    func_ov000_02163384(2);
    *(uint32_t *)(func_ov000_02163350() + 0x5dc) = 0;
    func_ov000_02163350()[0x18] = 0;

    {
        uint8_t v;
        v = func_ov000_02163350()[0x15];
        if (v == 0) {
            mode = 3;
        } else {
            v = func_ov000_02163350()[0x15];
            mode = 4;
            if (v != 1) {
                mode = 6;
            }
        }
    }

    if (func_ov000_02163350()[0x15] == 3) {
        func_ov000_02163350()[0x15] = 2;
    }

    func_ov000_0215e0d8(mode);
    func_ov000_021619c8();
    *(uint32_t *)(func_ov000_02163350() + 0x67c) = 0;
}
