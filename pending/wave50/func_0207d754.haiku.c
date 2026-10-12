#include "ffc/types.h"

extern uint32_t data_02140e00[];
extern uint32_t data_02140cc0[];
extern void func_0207d524(uint32_t);
extern void func_02086700(uint32_t);
extern void func_02086724(uint32_t);
extern void func_0207d55c(void);
extern void func_0207db64(void);

void func_0207d754(void) {
    uint32_t *p = (uint32_t *)data_02140e00[3];
    if (p == 0) {
        return;
    }
    p[3] += 0x200;
    p[4] += 0x200;
    p[5] -= 0x200;
    if (p[5] != 0) {
        func_0207d524(p[3]);
        return;
    }
    ((void (*)(uint32_t))((uint32_t *)data_02140cc0[3])[1])(data_02140cc0[2]);
    func_02086700(0x200 << 10);
    func_02086724(0x200 << 10);
    data_02140e00[3] = 0;
    func_0207d55c();
    func_0207db64();
    if (p[1] != 0) {
        ((void (*)(uint32_t))p[1])(p[2]);
    }
}
