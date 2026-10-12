#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern void func_ov006_021a401c(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a42b0(int x);
extern void func_ov006_021a42c4(int x);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021aa0d0(void);
extern uint8_t *data_ov006_021bc780;

void func_ov006_021aa078(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    func_ov006_021a401c();
    func_ov006_021b0600(20);
    if (data_ov006_021bc780[0x29] == 0) {
        func_ov006_021a42b0(0);
    }
    if (data_ov006_021bc780[0x29] == 0x20) {
        func_ov006_021a42c4(0);
    }
    func_ov006_021a64c8(func_ov006_021aa0d0);
}
