#include "ffc/types.h"
extern uint32_t data_020b2948;
extern struct { uint32_t a, b, c, d; } data_02141370;
extern void func_021d9ba4(uint32_t);
extern void func_02084774(uint32_t);
extern void func_020831ec(uint32_t);
void func_02082d14(void)
{
    uint32_t v = data_020b2948;
    if (v != 0xFFFFFFFF) {
        if (v > 3) {
            func_021d9ba4(v - 4);
        } else {
            func_02084774(v);
        }
    }
    func_020831ec(data_02141370.d);
    data_02141370.d = 0;
    data_02141370.c = 0;
}
