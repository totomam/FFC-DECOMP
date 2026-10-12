#include "ffc/types.h"

extern uint32_t func_02082160(void);
extern void func_020849c4(void *p, uint32_t a, uint32_t b);
extern void func_021d9ad8(uint32_t t, void *p, uint32_t a, uint32_t b);
extern void func_020845a8(uint32_t t, void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b2948;

void func_02082820(void *p0, uint32_t p1, uint32_t p2) {
    uint32_t x = func_02082160();
    uint32_t t = data_020b2948;
    if (t == 0xFFFFFFFF || p2 <= 0x1c) {
        func_020849c4(p0, x + p1, p2);
        return;
    }
    if (t > 3) {
        uint32_t addr = x + p1;
        if ((((uint32_t)p0) | addr | p2) & 3) {
            func_020849c4(p0, addr, p2);
        } else {
            func_021d9ad8(t - 4, p0, addr, p2);
        }
        return;
    }
    func_020845a8(t, p0, x + p1, p2, 1);
}
