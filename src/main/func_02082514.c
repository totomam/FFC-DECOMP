#include "ffc/types.h"

extern uint32_t data_020b2948;
extern void func_021d9ad8(uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_020844ec(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_020849f4(uint32_t, uint32_t, uint32_t);

void func_02082514(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t g = data_020b2948;
    if (g != 0xffffffffu && c > 0x30u) {
        if (g > 3u) {
            func_021d9ad8(g - 4u, a, b + 0x07000000u, c);
        } else {
            func_020844ec(g, a, b + 0x07000000u, c, 1);
        }
        return;
    }
    func_020849f4(a, b + 0x07000000u, c);
}
