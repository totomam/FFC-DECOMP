#include "ffc/types.h"

extern void func_021d9ba4(uint32_t);
extern void func_02084774(void);
extern void func_020831ec(uint32_t);
extern uint32_t data_020b2948;
extern uint32_t data_02141370[];

void func_02082d14(void)
{
    uint32_t v = data_020b2948;
    if (v != 0xFFFFFFFFu) {
        if (v > 3) {
            func_021d9ba4(v - 4);
        } else {
            func_02084774();
        }
    }
    func_020831ec(data_02141370[3]);
    data_02141370[3] = 0;
    data_02141370[2] = 0;
}
