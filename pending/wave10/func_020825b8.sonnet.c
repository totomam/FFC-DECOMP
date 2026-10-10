#include "ffc/types.h"

extern int func_021d9ad8(uint32_t, uint32_t, uint32_t, uint32_t);
extern int func_020844ec(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern int func_020849f4(uint32_t, uint32_t, uint32_t);
extern uint32_t data_020b2948;

int func_020825b8(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t v = data_020b2948;
    uint32_t addr = b + (0x19u << 22);
    if (v != 0xFFFFFFFFu && c > 0x30u) {
        if (v > 3u) {
            return func_021d9ad8(v - 4u, a, addr, c);
        }
        return func_020844ec(v, a, addr, c, 1);
    }
    return func_020849f4(a, addr, c);
}
