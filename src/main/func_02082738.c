#include "ffc/types.h"

extern uint32_t func_02082118(uint32_t a, uint32_t b, uint32_t c);
extern void func_021d9ad8(uint32_t x, uint32_t a, uint32_t s, uint32_t c);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020845a8(uint32_t x, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_020b2948;

void func_02082738(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t r = func_02082118(a, b, c);
    uint32_t x = data_020b2948;
    if (x != 0xFFFFFFFFu) {
        if (c > 0x1cu) {
            if (x > 3u) {
                uint32_t s = r + b;
                if ((((a | s) | c) & 3u) == 0) {
                    func_021d9ad8(x - 4u, a, s, c);
                } else {
                    func_020849c4(a, s, c);
                }
            } else {
                func_020845a8(x, a, r + b, c, 1);
            }
            return;
        }
    }
    func_020849c4(a, r + b, c);
}
