#include "ffc/types.h"

typedef struct {
    uint8_t mode;
    uint8_t pad[3];
    uint32_t val;
} OvState;

extern int func_ov006_021b3fb8(int a);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b392c(uint32_t v);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021ad878(void);
extern void func_ov006_021a7768(void);
extern OvState data_ov006_021bc73c;

void func_ov006_021a6f24(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    func_ov006_021a3df0();
    func_ov006_021a3b28();
    func_ov006_021b392c(data_ov006_021bc73c.val);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x14);

    switch (data_ov006_021bc73c.mode) {
    case 0:
        func_ov006_021a64d4(1, 0);
        func_ov006_021a64c8((void *)func_ov006_021ad878);
        return;
    case 1:
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8((void *)func_ov006_021a7768);
        return;
    default:
        return;
    }
}
