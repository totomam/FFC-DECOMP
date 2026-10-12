#include "ffc/types.h"

extern void func_021d9ba4(uint32_t x);
extern void func_02084774(void);
extern void func_020830f0(uint32_t x);
extern uint32_t data_020b2948;
extern uint32_t data_02141370[];

void func_02082c58(void) {
    uint32_t v = data_020b2948;
    if (v != 0xFFFFFFFFu) {
        if (v > 3) {
            func_021d9ba4(v - 4);
        } else {
            func_02084774();
        }
    }
    func_020830f0(data_02141370[5]);
    data_02141370[7] = 0;
    data_02141370[6] = 0;
    data_02141370[1] = 0;
    data_02141370[5] = 0;
}
