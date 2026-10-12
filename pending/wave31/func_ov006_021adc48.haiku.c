#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x1d];
    uint8_t f1d;
} Inner;

typedef struct Outer {
    uint8_t b0;
    uint8_t pad[3];
    Inner *p;
} Outer;

extern Outer data_ov006_021bc7ac;
extern int func_ov006_021b3fb8(int a);
extern void *func_ov006_021afd28(void);
extern void func_ov006_021a3724(void);
extern int func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021adc9c(void);
extern void func_ov006_021a64c8(void (*f)(void));

void func_ov006_021adc48(void)
{
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (data_ov006_021bc7ac.p->f1d == 1) {
        if (data_ov006_021bc7ac.b0 == 3 ||
            *(uint8_t *)((uint8_t *)func_ov006_021afd28() + 0xe7) != 0xff) {
            func_ov006_021a3724();
        }
    }
    func_ov006_021b3fd0(3, 1, 1, 8);
    func_ov006_021b3fd0(3, 0, 0x14, 8);
    func_ov006_021a64c8(func_ov006_021adc9c);
}
