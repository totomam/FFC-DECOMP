#include "ffc/types.h"

extern uint32_t func_ov000_0215e450(int, uint32_t, uint32_t, uint32_t);
extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov000_02162b90(uint32_t, uint32_t, uint32_t);
extern void func_02084ca4(uint32_t, uint32_t, uint32_t);
extern uint32_t func_ov000_0215dbd8(int, int);
extern uint32_t func_ov000_0216335c(int);
extern uint32_t func_ov001_021865a0(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_ov000_02161a1c(int);
extern uint32_t func_ov000_0215e0d8(int);
extern uint32_t func_ov000_021619c8(void);
extern uint32_t func_ov000_0215c3a0(uint32_t);
extern uint32_t func_ov001_02184030(uint32_t);
extern uint32_t func_ov000_0215e584(uint32_t);
extern void func_ov000_02161bf4(void);

void func_ov000_0215c660(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8,
                         uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12,
                         uint32_t p13)
{
    uint8_t *b;
    uint32_t r;

    func_ov000_0215e450(1, a3, p5, p6);
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x780) = p9;
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x624) = 1;
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x784) = p10;
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x778) = p7;
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x77c) = p8;
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x7b0) = a0;
    func_ov000_02162b90(p11, p12, p13);
    b = func_ov000_02163350();
    func_02084ca4(a1, (uint32_t)(b + 0x694), a2);
    b = func_ov000_02163350();
    *(uint32_t *)(b + 0x6d4) = a2;
    if (a2 == 0) {
        func_ov000_0215dbd8(10, 0);
        return;
    }
    func_ov000_0216335c(0x16);
    b = func_ov000_02163350();
    if (*(uint32_t *)(b + 0x5e0) == 0) {
        uint8_t *r5 = func_ov000_02163350();
        uint8_t *r6 = func_ov000_02163350();
        uint8_t *r7 = func_ov000_02163350();
        uint8_t *r2 = func_ov000_02163350();
        uint32_t res = func_ov001_021865a0(*(uint32_t *)(r6 + 0x684),
                                           *(uint32_t *)(r7 + 0x684),
                                           *(uint32_t *)(r2 + 0x688),
                                           0, 0x14, 1, 0,
                                           (uint32_t)func_ov000_02161bf4, 0);
        *(uint32_t *)(r5 + 0x5e0) = res;
    }
    b = func_ov000_02163350();
    if (*(uint32_t *)(b + 0x5e0) == 0) {
        r = func_ov000_02161a1c(5);
        if (r) {
            return;
        }
    }
    func_ov000_0215e0d8(4);
    r = func_ov000_021619c8();
    if (r) {
        return;
    }
    b = func_ov000_02163350();
    b[0x14] = 3;
    b = func_ov000_02163350();
    if (*(uint32_t *)(b + 0x10) == 0) {
        b = func_ov000_02163350();
        r = func_ov000_0215c3a0(*(uint32_t *)(b + 0x678));
        if (r) {
            return;
        }
    } else {
        b = func_ov000_02163350();
        func_ov001_02184030(*(uint32_t *)(b + 0x10));
    }
    b = func_ov000_02163350();
    if (func_ov000_02161a1c(func_ov000_0215e584(*(uint32_t *)(b + 0x678)))) {
        return;
    }
}
