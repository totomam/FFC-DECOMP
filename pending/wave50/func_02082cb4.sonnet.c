#include "ffc/types.h"

extern uint32_t data_02141370[];
extern uint32_t data_020b2948;
extern void func_021d9b4c(uint32_t g, uint32_t a, uint32_t off, uint32_t c, uint32_t x, uint32_t y);
extern void func_020846b0(uint32_t g, uint32_t a, uint32_t off, uint32_t c, uint32_t x, uint32_t y, uint32_t z);
extern void func_020849f4(uint32_t a, uint32_t off);

void func_02082cb4(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t x = data_02141370[2];
    uint32_t g = data_020b2948;
    if (g != 0xffffffff) {
        if (g > 3) {
            func_021d9b4c(g - 4, a, x + b, c, 0, 0);
        } else {
            func_020846b0(g, a, x + b, c, 0, 0, 1);
        }
    } else {
        func_020849f4(a, x + b);
    }
}
