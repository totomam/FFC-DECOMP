#include "ffc/types.h"

extern void func_ov000_02160bfc(void);
extern void func_ov000_0215e1d8(void);
extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov000_021599d0(uint32_t);
extern void func_ov000_02163384(uint32_t);
extern void func_ov000_0216335c(uint32_t);
extern void func_ov000_0215e584(uint32_t);
extern uint32_t func_ov000_02161a1c(void);

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov000_02160d04(uint32_t a)
{
    uint32_t flag, r5, w;
    uint8_t *fb;

    if (a == 0) {
        func_ov000_02160bfc();
        return;
    }
    func_ov000_0215e1d8();
    if (func_ov000_02163350()[0x15] == 2 || func_ov000_02163350()[0x15] == 3) {
        flag = (*(uint32_t *)(func_ov000_02163350() + 0x680) == 0);
        fb = func_ov000_02163350();
        r5 = func_ov000_021599d0(*(uint32_t *)(func_ov000_02163350() + 0x680));
        w = *(uint32_t *)(func_ov000_02163350() + 0x774);
        ((fn_t)*(uint32_t *)(fb + 0x770))(0, 1, flag, 0, r5, w);
        return;
    }
    if (func_ov000_02163350()[0x15] != 0) {
        if (func_ov000_02163350()[0x15] != 1) {
            return;
        }
        if (func_ov000_02163350()[0xd] != 0) {
            flag = (*(uint32_t *)(func_ov000_02163350() + 0x680) == 0);
            fb = func_ov000_02163350();
            r5 = func_ov000_021599d0(*(uint32_t *)(func_ov000_02163350() + 0x680));
            w = *(uint32_t *)(func_ov000_02163350() + 0x774);
            ((fn_t)*(uint32_t *)(fb + 0x770))(0, 1, flag, 0, r5, w);
        }
        if (a == 1) {
            func_ov000_02163384(0);
            *(uint32_t *)(func_ov000_02163350() + 0x798) = 0;
            func_ov000_0216335c(0x16);
            func_ov000_0215e584(*(uint32_t *)(func_ov000_02163350() + 0x678));
            func_ov000_02161a1c();
        }
        return;
    }
    if (func_ov000_02163350()[0xd] != 0) {
        flag = (*(uint32_t *)(func_ov000_02163350() + 0x680) == 0);
        fb = func_ov000_02163350();
        r5 = func_ov000_021599d0(*(uint32_t *)(func_ov000_02163350() + 0x680));
        w = *(uint32_t *)(func_ov000_02163350() + 0x774);
        ((fn_t)*(uint32_t *)(fb + 0x770))(0, 1, flag, 0, r5, w);
    }
    if (a == 1) {
        func_ov000_02163384(0);
        func_ov000_0216335c(0x16);
        func_ov000_0215e584(*(uint32_t *)(func_ov000_02163350() + 0x678));
        func_ov000_02161a1c();
    }
}
