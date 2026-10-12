#include "ffc/types.h"

extern uint8_t *func_ov003_0214649c(uint32_t a);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov003_02148ae4(uint32_t a, uint32_t b, uint32_t c);
extern double func_02099edc(uint32_t a);
extern double func_02099390(double a, double b);
extern uint32_t func_0209abd0(double a);
extern void func_0202b240(uint32_t a, void *b);
extern void func_0202b24c(uint32_t a, void *b);
extern void func_0202d6ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0202d68c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

#define W(off) (*(uint32_t *)((uint8_t *)self + (off)))

void func_ov003_02158264(void *self, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint8_t *x;
    uint8_t *m;
    uint8_t flag;
    int32_t r6;
    uint16_t r2;

    if (W(0x110) == 0) {
        return;
    }
    x = func_ov003_0214649c(W(0x108));
    m = func_02052d90(*(void **)(x + 0xe4), *(uint32_t *)(x + 0xe8));
    flag = m[8];

    if (a3 != 0) {
        if (!(W(0x134) == W(0xb4) && W(0x138) == W(0xb8))) {
            uint32_t v = func_ov003_02148ae4(W(0x108), W(0xb4), W(0xb8));
            if (v != 0x80000000) {
                W(0x104) = v;
            }
        }
    }
    W(0x134) = W(0xb4);
    W(0x128) = W(0xb4);
    if (flag != 0 && a3 != 0) {
        double d = func_02099390(3.2, func_02099edc(W(0x104)));
        W(0x138) = func_0209abd0(d);
    } else {
        W(0x138) = W(0x104);
    }

    W(0x13c) = W(0xb8);
    W(0x130) = W(0xb8);
    W(0x138) = W(0x138) + W(0x368);
    W(0x12c) = W(0x138);
    func_0202b240(W(0x110), (uint8_t *)self + 0x134);
    if (W(0x118) != 0) {
        func_0202b240(W(0x118), (uint8_t *)self + 0x134);
    }
    if (W(0x120) != 0) {
        func_0202b240(W(0x120), (uint8_t *)self + 0x134);
    }

    if (flag != 0) {
        r2 = (uint16_t)(0x4000 - a2);
        W(0x140) = a1;
    } else {
        r2 = (uint16_t)(0x4000 - *(uint16_t *)((uint8_t *)self + 0xbc));
        W(0x140) = 0;
    }

    r6 = ((int32_t)((uint32_t)r2 * 0x168)) >> 4;
    W(0x144) = (uint32_t)r6;
    W(0x148) = 0;
    func_0202b24c(W(0x110), (uint8_t *)self + 0x140);
    if (W(0x118) != 0) {
        func_0202b24c(W(0x118), (uint8_t *)self + 0x140);
    }
    if (W(0x120) != 0) {
        func_0202b24c(W(0x120), (uint8_t *)self + 0x140);
    }

    if (W(0x11c) != 0) {
        W(0x130) = W(0x130) + W(0x358);
        func_0202b240(W(0x11c), (uint8_t *)self + 0x128);
    }
    if (W(0x124) == 0) {
        return;
    }
    func_0202d6ec(W(0x124), W(0xb4), W(0x104) + W(0x368), W(0xb8));
    func_0202d68c(W(0x124), 0, (uint32_t)r6, 0);
}
