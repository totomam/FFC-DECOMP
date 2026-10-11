#include "ffc/types.h"

extern void func_ov006_021b20f0(int x);
extern int func_0208e908(void *p, int y);
extern void func_ov006_021b2140(void);
extern uint32_t data_ov006_021bc800[];

int func_ov006_021b248c(void) {
    uint32_t base;
    func_ov006_021b20f0(6);
    base = data_ov006_021bc800[1];
    if (func_0208e908((void *)(base + 0x1e00), 0xd) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    return 1;
}
