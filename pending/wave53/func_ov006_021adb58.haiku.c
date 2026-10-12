#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x1d];
    uint8_t state;
} Inner;

typedef struct Outer {
    uint8_t a;
    uint8_t pad[3];
    Inner *inner;
} Outer;

extern int32_t func_ov006_021a3744(void);
extern int32_t func_ov006_021a6530(void);
extern void func_ov006_021b0600(uint32_t x);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a64c8(void *f);
extern int32_t func_ov006_021b0018(uint32_t x);
extern void func_ov006_021a376c(int32_t x);
extern int32_t func_ov006_021a6524(void);
extern void func_ov006_021b11fc(uint32_t a, uint32_t b, int32_t c, int32_t d, int32_t e);
extern void func_ov006_021adefc(void);
extern void func_ov006_021b002c(void);
extern void func_ov006_021ae048(void);
extern Outer data_ov006_021bc7ac;
extern void func_ov006_021a6a00(void);
extern int8_t data_ov006_021b8774[];
extern void func_ov006_021adf54(void);
extern void func_ov006_021adc1c(void);

void func_ov006_021adb58(void)
{
    int32_t s;
    int32_t t;
    int32_t r4;
    uint8_t a;
    int32_t r5;

    s = func_ov006_021a3744();
    switch (s) {
    case 0:
        t = func_ov006_021a6530();
        switch (t) {
        case 0:
            func_ov006_021b0600(7);
            data_ov006_021bc7ac.inner->state = 2;
            break;
        case 1:
            func_ov006_021a37a8();
            func_ov006_021a64c8(func_ov006_021a6a00);
            return;
        }
        break;
    case 1:
        r4 = 1;
        data_ov006_021bc7ac.inner->state = (uint8_t)r4;
        a = data_ov006_021bc7ac.a;
        if (a >= 4) {
            r5 = a - 4;
            if (func_ov006_021b0018(r5) == 0xff) {
                int32_t n = 9;
                func_ov006_021b0600(9);
                n -= 10;
                func_ov006_021a376c(n);
                return;
            }
            func_ov006_021b0600(6);
            {
                int32_t idx = func_ov006_021a6524();
                func_ov006_021b11fc(0x46, 0, r4, data_ov006_021b8774[idx], r5 + 1);
            }
            func_ov006_021adefc();
            func_ov006_021a37a8();
            func_ov006_021a64c8(func_ov006_021adf54);
            return;
        }
        if (a <= 2) {
            func_ov006_021b002c();
        }
        func_ov006_021b0600(6);
        func_ov006_021ae048();
        break;
    default:
        return;
    }
    func_ov006_021a64c8(func_ov006_021adc1c);
}
