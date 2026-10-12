#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint8_t *func_ov000_02163608(void);
extern void func_ov000_0215e450(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_02163758(void);
extern void func_ov000_02163414(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_02162b90(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02163384(uint32_t a);
extern void func_ov000_0216335c(uint32_t a);
extern uint32_t func_ov001_021865a0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern uint32_t func_ov000_02161a1c(uint32_t a);
extern void func_ov000_0215e0d8(uint32_t a);
extern uint32_t func_ov000_021619c8(void);
extern uint32_t func_ov000_0215c3a0(uint32_t a);
extern void func_ov001_02184030(uint32_t a);
extern uint32_t func_ov000_0215e584(uint32_t a);
extern void func_ov000_0215fef0(uint32_t a, uint32_t b);
extern uint32_t func_ov000_0215fed0(void);
extern void func_ov000_02161bf4(void);

typedef struct { uint32_t x[10]; } Big;
#define FLD(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define FLD8(p, o) (*(uint8_t *)((uint8_t *)(p) + (o)))

void func_ov000_0215c8c4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    uint8_t buf3[0x28];
    uint8_t buf2[0x28];
    uint8_t buf1[0x28];
    uint8_t flag;
    uint8_t *s;
    uint8_t *s2;
    uint32_t ret;
    int k = 0x778;

    if (FLD(func_ov000_02163350(), 0x798)) {
        s = func_ov000_02163350();
        *(Big *)buf3 = *(Big *)(s + 0x554);
        s2 = func_ov000_02163608();
        *(Big *)buf2 = *(Big *)s2;
        flag = FLD8(func_ov000_02163350(), 0x62b);
    }
    func_ov000_0215e450(3, 0, c, d);
    s = func_ov000_02163350();
    FLD(s, 0x7b0) = a;
    if (FLD(func_ov000_02163350(), 0x798) == 0) {
        func_02084b2c(buf1, 0, 0x28);
        func_ov000_02163758();
        s = func_ov000_02163350();
        FLD8(s, 0x56a) = 0xff;
        s = func_ov000_02163350();
        FLD(s, 0x554) = b;
    } else {
        s = func_ov000_02163350();
        *(Big *)(s + 0x554) = *(Big *)buf3;
        func_ov000_02163414(buf2);
        s = func_ov000_02163350();
        func_02084ca4(buf2 + 0x24, s + 0x7bc, 4);
        s = func_ov000_02163350();
        FLD8(s, 0x62b) = flag;
    }
    FLD(func_ov000_02163350(), k) = e;
    FLD(func_ov000_02163350(), k + 4) = f;
    func_ov000_02162b90(g, h, i);
    FLD8(func_ov000_02163350(), 0x18) = 1;
    s = func_ov000_02163350();
    FLD(s, 0x5dc) = FLD(func_ov000_02163350(), 0x678);
    func_ov000_02163384(1);
    if (FLD(func_ov000_02163350(), k + 0x20) == 0) {
        func_ov000_0216335c(0x16);
    }
    if (FLD(func_ov000_02163350(), 0x5e0) == 0) {
        uint8_t *r5 = func_ov000_02163350();
        uint8_t *r4 = func_ov000_02163350();
        uint8_t *r6 = func_ov000_02163350();
        uint8_t *r2 = func_ov000_02163350();
        ret = func_ov001_021865a0(FLD(r4, 0x684), FLD(r6, 0x684), FLD(r2, 0x688), 0, 0x14, 1, 0,
                                  (uint32_t)func_ov000_02161bf4, 0);
        FLD(r5, 0x5e0) = ret;
    }
    if (FLD(func_ov000_02163350(), 0x5e0) == 0) {
        if (func_ov000_02161a1c(5)) {
            return;
        }
    }
    func_ov000_0215e0d8(5);
    if (func_ov000_021619c8()) {
        return;
    }
    if (FLD(func_ov000_02163350(), 0x10) == 0) {
        if (func_ov000_0215c3a0(FLD(func_ov000_02163350(), 0x678))) {
            return;
        }
    } else {
        func_ov001_02184030(FLD(func_ov000_02163350(), 0x10));
    }
    if (FLD(func_ov000_02163350(), 0x798) == 0) {
        if (func_ov000_02161a1c(func_ov000_0215e584(FLD(func_ov000_02163350(), 0x678)))) return;
        return;
    }
    func_ov001_02184030(FLD(func_ov000_02163350(), 0x10));
    func_ov000_0216335c(3);
    func_ov000_0215fef0(b, 0);
    if (func_ov000_0215fed0()) return;
}
