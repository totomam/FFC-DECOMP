#include "ffc/types.h"

extern int func_0205447c(void);
extern uint32_t *func_ov004_021530d8(void *obj);
extern int func_02034464(void *p);
extern void *func_ov004_0215311c(void *obj);
extern void func_02021b48(void *obj, int v);
extern void func_020213b8(int v);
extern int func_ov004_02153114(void *obj);
extern void func_ov004_02153568(void *obj, int v);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

void func_ov004_02149aa4(uint8_t *s) {
    uint32_t i;
    uint32_t sum;
    int32_t r5;
    int32_t r6;
    uint32_t *v;
    uint32_t a, b, m;
    uint8_t *q;
    int32_t fl;

    if (func_0205447c() != 0) {
        *(int32_t *)(s + 0xa4) = 0xb4;
    }
    if (*(int32_t *)(s + 0xa4) != 0) {
        *(int32_t *)(s + 0xa4) = *(int32_t *)(s + 0xa4) - 1;
    }

    v = func_ov004_021530d8(*(void **)(s + 0x80));
    a = v[1];
    b = v[2];
    m = (a & (a ^ b)) & 0x300;
    if (m != 0) {
        r5 = 1;
    } else {
        r5 = 0;
    }
    q = s + s[0xa1];
    q[0x88] = (uint8_t)r5;

    s[0xa1] = (uint8_t)(func_0209a76c(s[0xa1] + 1, 0x19) >> 32);

    sum = 0;
    for (i = 0; i < 0x19; i++) {
        sum += s[i + 0x88];
    }

    if (*(int32_t *)(s + 0xa4) != 0) {
        r6 = 0;
    } else {
        r6 = func_02034464(*(void **)(s + 0x84));
    }

    if (sum < 2) {
        r5 = 0;
    } else {
        r5 = 1;
    }

    if (r5 != 0) {
        func_02021b48(func_ov004_0215311c(*(void **)(s + 0x80)), 0x14);
        func_020213b8(0x94);
    }

    if (r6 != 0) {
        func_02021b48(func_ov004_0215311c(*(void **)(s + 0x80)), 0x13);
    }

    if (r6 != 0 || r5 != 0) {
        if (func_ov004_02153114(*(void **)(s + 0x80)) != 0) {
            func_ov004_02153568(*(void **)(s + 0x80), 8);
        }
    }
}
