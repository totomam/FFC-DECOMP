#include "ffc/types.h"

extern void func_ov004_0214f628(int32_t *out);
extern int32_t func_ov004_021489d8(int32_t x);
extern void func_ov004_02148fb0(int32_t *out, int32_t v);
extern void func_ov004_02148fb8(int32_t *out, int32_t v);
extern int32_t func_ov004_021489d0(int32_t x);
extern int32_t func_ov004_021495a8(int32_t x);
extern void *func_ov004_02153114(uint8_t *p);
extern int32_t func_ov004_02153514(uint8_t *p);
extern void func_020213b8(int32_t x);
extern void func_ov004_0214f388(void *p);
extern int32_t func_ov004_0214f76c(int32_t x);
extern int32_t func_ov004_0214cf7c(int32_t x);
extern void func_ov004_0214e2f0(void *p);
extern void func_ov004_02155160(uint8_t *p, int32_t a, int32_t b);
extern void func_ov004_02153770(uint8_t *p, int32_t a);
extern int32_t func_ov004_02153544(uint8_t *p);
extern void func_ov004_0215384c(uint8_t *p, int32_t a);
extern void func_ov004_0214f1d0(int32_t a, int32_t b, int32_t c);

void func_ov004_02153598(uint8_t *p, int32_t a, int32_t b)
{
    int32_t t;
    int32_t x;
    int32_t y;
    int32_t v;
    int32_t ok;
    int32_t r;
    int32_t r7;

    r7 = 0;
    ok = 1;
    r = 1;
    if (*(int32_t *)(p + 0xe4) == 0) {
        return;
    }
    if (p[0xca] == 0) {
        func_ov004_0214f628(&t);
        if (t == 0x64000) {
            r7 = ok;
        }
    }
    if (r7 == 0) {
        if (p[0xca] != 0) {
            v = *(int32_t *)(p + 0x228) << 12;
            func_ov004_02148fb0(&x, func_ov004_021489d8(*(int32_t *)(p + 0xf8)));
            r7 = (x >= v);
        }
        if (r7 == 0) {
            r = 0;
        }
    }
    if (r == 0) {
        v = (100 - *(int32_t *)(p + 0x228)) << 12;
        r7 = 1;
        func_ov004_02148fb8(&y, func_ov004_021489d8(*(int32_t *)(p + 0xf8)));
        if (y <= v) {
            if (func_ov004_021495a8(func_ov004_021489d0(*(int32_t *)(p + 0xf8))) == 0) {
                r7 = 0;
            }
        }
        if (r7 == 0) {
            ok = 0;
        }
    }
    if (ok != 0) {
        return;
    }
    if (a > 11) {
        return;
    }
    switch (a) {
    case 5:
        if (func_ov004_0214f76c(*(int32_t *)(p + 0xe4)) != 0) {
            return;
        }
        if (func_ov004_0214cf7c(*(int32_t *)(p + 0xfc)) == 0) {
            return;
        }
        func_ov004_0214e2f0(func_ov004_02153114(p));
        return;
    case 6:
        func_ov004_02155160(p, b, 0);
        return;
    case 7:
        func_ov004_02155160(p, b, 1);
        return;
    case 8:
        if (func_ov004_02153114(p) == 0) {
            return;
        }
        if (b != func_ov004_02153514(p)) {
            func_020213b8(0x94);
        }
        func_ov004_0214f388(func_ov004_02153114(p));
        return;
    case 9:
        func_ov004_02153770(p, b);
        if (func_ov004_02153544(p) == 0) {
            return;
        }
        *(int32_t *)((uint8_t *)(*(int32_t **)(p + 0x2ac)) + 4 + b * 12) -= 1;
        return;
    case 10:
        func_ov004_0215384c(p, b);
        if (func_ov004_02153544(p) == 0) {
            return;
        }
        *(int32_t *)((uint8_t *)(*(int32_t **)(p + 0x2ac)) + 8 + b * 12) -= 1;
        return;
    case 11:
        func_ov004_0214f1d0(*(int32_t *)(p + 0xe4), b, 0x200);
        return;
    default:
        return;
    }
}
