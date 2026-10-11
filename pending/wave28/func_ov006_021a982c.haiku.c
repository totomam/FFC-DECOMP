#include "ffc/types.h"

struct Inner {
    uint8_t pad[0x54];
    uint8_t flag;
};

struct Outer {
    uint32_t a;
    struct Inner *p;
};

extern struct Outer data_ov006_021bc778;
extern int func_ov006_021b3fb8(int);
extern void func_ov006_021a3724(void);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021b3fd0(int, int, int, int);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a9878(void);

void func_ov006_021a982c(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        if (data_ov006_021bc778.p->flag != 0) {
            func_ov006_021a3724();
        } else {
            func_ov006_021a37a8();
        }
        func_ov006_021b3fd0(3, 1, 1, 8);
        func_ov006_021b3fd0(3, 0, 0x1d, 8);
        func_ov006_021a64c8(func_ov006_021a9878);
    }
}
