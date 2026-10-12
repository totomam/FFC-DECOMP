#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *dst, int c, uint32_t n);
extern void func_ov006_0219ef5c(void *dst, void *src, uint32_t n);
extern uint32_t func_ov006_0219f090(void *p);
extern int func_ov006_0219dcb0(void *p, uint32_t n);
extern uint8_t data_ov006_021bab04[];
extern uint8_t data_ov006_021bab74[];
extern uint8_t data_ov006_021ba8a4[];
extern uint8_t data_ov006_021ba9d4[];
extern uint8_t data_ov006_021ba1dc[];

int func_ov006_0219dab8(uint8_t *a)
{
    uint8_t *r4 = a + 0x117;
    uint8_t *X = data_ov006_021bab04;
    uint8_t *Y = data_ov006_021bab74;
    uint8_t *r5 = data_ov006_021ba9d4;
    uint8_t *r6 = data_ov006_021ba8a4;
    uint8_t *t;
    uint32_t n;

    if (r4 == 0) {
        return -1;
    }
    *(uint16_t *)a = (uint16_t)(*(uint32_t *)(data_ov006_021ba1dc + 0x2c) & *(uint32_t *)(data_ov006_021ba1dc + 0x30));
    func_ov006_0219ef6c(r4, 0, 0x154);
    if (*(uint16_t *)a & 1) {
        func_ov006_0219ef5c(r4, r6 + 0x30, *(uint32_t *)(r6 + 4));
        func_ov006_0219ef5c(r4 + 6, r6 + 0x70, *(uint32_t *)(r6 + 4));
        func_ov006_0219ef5c(r4 + 0xc, r6 + 0xb0, *(uint32_t *)(r6 + 4));
        func_ov006_0219ef5c(r4 + 0x12, r6 + 0xf0, *(uint32_t *)(r6 + 4));
        if (func_ov006_0219dcb0(r6 + 8, func_ov006_0219f090(r6 + 8)) != 0) {
            goto err;
        }
        n = func_ov006_0219f090(r6 + 8);
        r6 += 8;
        func_ov006_0219ef5c(r4 + 0x18, r6, n);
    }
    if (*(uint16_t *)a & 2) {
        func_ov006_0219ef5c(r4 + 0x39, r5 + 0x30, *(uint32_t *)(r5 + 4));
        func_ov006_0219ef5c(r4 + 0x47, r5 + 0x70, *(uint32_t *)(r5 + 4));
        func_ov006_0219ef5c(r4 + 0x55, r5 + 0xb0, *(uint32_t *)(r5 + 4));
        func_ov006_0219ef5c(r4 + 0x63, r5 + 0xf0, *(uint32_t *)(r5 + 4));
        if (func_ov006_0219dcb0(r5 + 8, func_ov006_0219f090(r5 + 8)) != 0) {
            goto err;
        }
        n = func_ov006_0219f090(r5 + 8);
        r5 += 8;
        func_ov006_0219ef5c(r4 + 0x71, r5, n);
    }
    if (*(uint16_t *)a & 4) {
        if (func_ov006_0219dcb0(X + 0x30, *(uint32_t *)(X + 4) - 1) != 0) {
            goto err;
        }
        func_ov006_0219ef5c(r4 + 0x92, X + 0x30, *(uint32_t *)(X + 4));
        if (func_ov006_0219dcb0(X + 8, func_ov006_0219f090(X + 8)) != 0) {
            goto err;
        }
        n = func_ov006_0219f090(X + 8);
        X += 8;
        func_ov006_0219ef5c(r4 + 0xd2, X, n);
    }
    if (*(uint16_t *)a & 8) {
        if (func_ov006_0219dcb0(Y + 0x30, *(uint32_t *)(Y + 4) - 1) != 0) {
            goto err;
        }
        func_ov006_0219ef5c(r4 + 0xf3, Y + 0x30, *(uint32_t *)(Y + 4));
        if (func_ov006_0219dcb0(Y + 8, func_ov006_0219f090(Y + 8)) != 0) {
            goto err;
        }
        n = func_ov006_0219f090(Y + 8);
        Y += 8;
        func_ov006_0219ef5c(r4 + 0x133, Y, n);
    }
    a[0x116] = 0;
    return 0;
err:
    func_ov006_0219ef6c(r4, 0, 0x154);
    return -1;
}
