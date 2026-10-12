#include "ffc/types.h"

extern uint32_t data_020b2948;
extern void func_021d9ad8(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020845a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_020823d0(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t v = data_020b2948;
    uint32_t s = b + 0x5000400;
    if (v != 0xFFFFFFFFu && c > 0x1c) {
        if (v > 3) {
            if (((a | s | c) & 3) == 0) {
                func_021d9ad8(v - 4, a, s);
            } else {
                func_020849c4(a, s, c);
            }
        } else {
            func_020845a8(v, a, s, c, 1);
        }
        return;
    }
    func_020849c4(a, s, c);
}
