#include "ffc/types.h"

extern uint32_t data_020b2948;
extern void func_021d9ad8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020845a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02082364(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t v = data_020b2948;
    if (v != 0xFFFFFFFF && c > 0x1c) {
        if (v > 3) {
            uint32_t base = b + 0x5000000;
            if ((((a | base) | c) & 3) == 0) {
                func_021d9ad8(v - 4, a, base, c);
            } else {
                func_020849c4(a, base, c);
            }
        } else {
            func_020845a8(v, a, b + 0x5000000, c, 1);
        }
    } else {
        func_020849c4(a, b + 0x5000000, c);
    }
}
