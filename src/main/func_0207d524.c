#include "ffc/types.h"

extern uint32_t func_0207d4f0(uint32_t x);
extern void func_0207d47c(uint32_t a, uint32_t b);

void func_0207d524(uint32_t p) {
    uint32_t r4 = 0xb7;
    if (func_0207d4f0(p) != 0) {
        r4 = 0;
    }
    func_0207d47c(r4, p);
    *(uint32_t *)0x040001a4 = (*(uint32_t *)0x02fffae0 & 0xf8ffffff) | 0xa1000000;
}
