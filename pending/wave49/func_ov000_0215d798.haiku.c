#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_02180630(void *p, const void *s, int n);
extern uint32_t func_02093748(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_0215b6f0(void);
extern int func_ov000_0216384c(void);
extern void func_ov000_0215dbbc(void);
extern void func_ov000_0216335c(int x);
extern void func_ov000_0215dbd8(int x, uint32_t y);
extern int func_ov001_02180628(void *p, uint32_t v);
extern int func_ov000_02163408(void);
extern uint8_t *func_ov000_0215b730(uint32_t t);
extern uint8_t *func_ov000_0215b76c(uint32_t t);
extern void func_ov000_02164400(uint8_t v);
extern void func_ov001_0218083c(void *p, void *q);
extern void func_ov000_021605d8(int x);

extern const uint8_t data_ov000_0216afc4[];
extern const uint8_t data_ov000_0216afd0[];
extern const uint8_t data_ov000_0216afdc[];

void func_ov000_0215d798(int unused, void *p, uint32_t a, int32_t b, int32_t c, uint32_t d, uint32_t e)
{
    uint32_t t2;
    uint32_t t = 0;
    uint8_t *x;
    uint8_t *y;
    uint8_t *bb;
    uint16_t key;

    if (func_ov000_02163350() != 0 && *(uint32_t *)(func_ov000_02163350() + 0x61c) == 5) {
        return;
    }
    if (func_ov000_02163350() == 0 ||
        *(uint32_t *)(func_ov000_02163350() + 0x61c) != 6 ||
        *(uint8_t *)(func_ov000_02163350() + 0x62a) != 0) {
        func_ov001_02180630(p, data_ov000_0216afc4, -1);
        return;
    }
    if (d && e) {
        t = func_02093748(d, 0, 10);
    }
    t2 = func_ov000_0215b6f0();
    if (t2 == 0xffffffff) {
        func_ov001_02180630(p, data_ov000_0216afd0, -1);
        if (func_ov000_0216384c() == 1) {
            func_ov000_0215dbbc();
            func_ov000_0216335c(1);
            return;
        }
        func_ov000_0215dbd8(6, 0xfffeabc4);
        return;
    }
    if (a == *(uint32_t *)(func_ov000_02163350() + 0x564)) {
        bb = func_ov000_02163350();
        key = (uint16_t)(((b >> 8) & 0xff) | ((b << 8) & 0xff00));
        if (key == *(uint16_t *)(bb + 0x568)) {
            goto L0112;
        }
    }
    if (t == *(uint32_t *)(func_ov000_02163350() + 0x554)) {
        bb = func_ov000_02163350();
        *(uint32_t *)(bb + 0x564) = a;
        bb = func_ov000_02163350();
        key = (uint16_t)(((b >> 8) & 0xff) | ((b << 8) & 0xff00));
        *(uint16_t *)(bb + 0x568) = key;
    } else {
        func_ov001_02180630(p, data_ov000_0216afdc, -1);
        return;
    }
L0112:
    bb = func_ov000_02163350();
    *(uint32_t *)(bb + 0x608) = 0;
    *(uint32_t *)(bb + 0x60c) = 0;
    if (func_ov001_02180628(p, *(uint32_t *)(func_ov000_02163350() + 8)) == 0) {
        func_ov000_0215dbd8(6, 0xfffec5e6);
        return;
    }
    func_ov000_0215dbbc();
    if (*(uint32_t *)(func_ov000_02163350() + 0x5a4) == 0 && func_ov000_02163408() == 1) {
        int32_t v = c >> 1;
        if (v >= 0xffff) {
            v = 0xffff;
        }
        *(uint16_t *)(func_ov000_02163350() + 0x630) = (uint16_t)v;
    }
    x = func_ov000_0215b730(t2);
    y = func_ov000_0215b76c(t2);
    *(void **)x = p;
    y[0] = (uint8_t)t2;
    y[1] = *(uint8_t *)(func_ov000_02163350() + 0x56a);
    *(uint32_t *)(y + 4) = *(uint32_t *)(func_ov000_02163350() + 0x554);
    func_ov000_02164400(y[1]);
    func_ov001_0218083c(p, y);
    func_ov000_021605d8(2);
}
