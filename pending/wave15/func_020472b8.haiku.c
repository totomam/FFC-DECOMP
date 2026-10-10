#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t a);
extern void func_0203a604(uint32_t a, uint32_t b);

void func_020472b8(void) {
    uint32_t r = func_0205681c(0x11C);
    if (r != 0) {
        func_0203a604(r, 0);
    }
}
