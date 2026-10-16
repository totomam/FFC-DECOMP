#include "ffc/types.h"
extern uint32_t data_020b2948;
extern void func_021d9ad8(uint32_t, uint32_t, uint32_t);
extern void func_020844ec(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_020849f4(uint32_t, uint32_t, uint32_t);
void func_02082604(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t addr = 0x6600000; addr += b;
    uint32_t g = data_020b2948;
    if (g != 0xFFFFFFFF && c > 0x30) {
        if (g > 3) {
            func_021d9ad8(g - 4, a, addr);
            return;
        }
        func_020844ec(g, a, addr, c, 1);
        return;
    }
    func_020849f4(a, addr, c);
}
