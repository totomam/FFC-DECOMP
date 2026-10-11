#include "ffc/types.h"

extern void func_020738a8(uint32_t a);
extern int32_t func_ov000_0216402c(uint32_t b, uint32_t a);
extern void func_02088f30(void);

void func_02073744(uint32_t a, uint32_t unused, uint32_t b) {
    func_020738a8(a);
    if (b != 0) {
        if (func_ov000_0216402c(b, a) == 0) {
            func_02088f30();
        }
    }
}
