#include "ffc/types.h"

extern void func_ov000_0215e450(int x);
extern void *func_ov000_02163350(void);
extern void *func_ov000_02163384(int x);
extern void func_ov000_0216335c(int x);
extern void func_ov000_0215e0d8(int x);
extern int func_ov000_021619c8(void);
extern void func_ov000_02162b90(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_02162b68(void);
extern int func_ov000_0215c3a0(uint32_t x);
extern int func_ov001_021865a0(int a, int b, int c, int d, int e, int f, int g, void *cb, int h);
extern int func_ov001_02184030(uint32_t x);
extern void func_ov000_0215e584(uint32_t x);
extern int func_ov000_02161a1c(void);
extern int func_ov000_02161bf4(void);

int func_ov000_0215c7c0(void *p, int r1, int r2, int r3, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4)
{
    uint8_t *o;
    int ret;
    uint32_t v;

    func_ov000_0215e450(2);
    o = func_ov000_02163350();
    *(uint32_t *)(o + 0x778) = s0;
    o = func_ov000_02163350();
    *(uint32_t *)(o + 0x77c) = s1;
    o = func_ov000_02163350();
    *(void **)(o + 0x7b0) = p;
    func_ov000_02162b90(s2, s3, s4);
    func_ov000_0216335c(0x16);
    func_ov000_0215e0d8(6);
    ret = func_ov000_021619c8();
    if (ret != 0) {
        return ret;
    }
    func_ov000_02163384(2);
    o = func_ov000_02163350();
    *(uint32_t *)(o + 0x7c4) = 1;
    o = func_ov000_02163350();
    if (*(uint32_t *)(o + 0x10) == 0) {
        o = func_ov000_02163350();
        ret = func_ov000_0215c3a0(*(uint32_t *)(o + 0x678));
        if (ret != 0) {
            return ret;
        }
    }
    o = func_ov000_02163350();
    v = func_ov000_02162b68();
    *(uint32_t *)(o + 0x790) = v;
    {
        uint8_t *a, *b, *c, *d;
        o = func_ov000_02163350();
        if (*(uint32_t *)(o + 0x5e0) == 0) {
            a = func_ov000_02163350();
            b = func_ov000_02163350();
            c = func_ov000_02163350();
            d = func_ov000_02163350();
            ret = func_ov001_021865a0(*(int *)(b + 0x684), *(int *)(c + 0x684), *(int *)(d + 0x688),
                                      0, 0x14, 1, 0, (void *)func_ov000_02161bf4, 0);
            *(int *)(a + 0x5e0) = ret;
        }
    }
    o = func_ov000_02163350();
    func_ov001_02184030(*(uint32_t *)(o + 0x10));
    o = func_ov000_02163350();
    func_ov000_0215e584(*(uint32_t *)(o + 0x678));
    ret = func_ov000_02161a1c();
    if (ret != 0) {
        return ret;
    }
}
