#include "ffc/types.h"

extern uint32_t func_0207d5ac(uint32_t a);
extern uint32_t func_0207d644(void);
extern uint32_t func_020883d8(uint32_t a);
extern uint32_t func_020871d8(uint32_t a);
extern uint32_t data_02141500;

void func_0207d600(uint32_t a) {
    if (func_0207d5ac(a) & a) {
        if (!(func_0207d5ac(func_0207d644()) & 0x20)) {
            uint32_t r;
            do {
                r = data_02141500;
                if (r != 0) {
                    r = func_020883d8(r);
                    if (r != 0) {
                        r = func_020871d8(1);
                    }
                }
                r = func_0207d5ac(r);
            } while (!(r & 0x20));
        }
    }
}
