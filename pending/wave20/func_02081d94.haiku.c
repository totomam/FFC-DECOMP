#include "ffc/types.h"

extern void func_0208203c(uint32_t addr);

void func_02081d94(void) {
    uint32_t r4 = 0x4000400;
    func_0208203c(r4);
    while (*(volatile uint32_t *)0x4000600 & (r4 << 0x11)) {
    }
}
