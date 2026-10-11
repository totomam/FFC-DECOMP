#include "ffc/types.h"

extern void func_0208203c(uint32_t arg);

void func_02081d94(void) {
    func_0208203c(0x04000400);
    while (*(volatile uint32_t *)0x04000600 & 0x08000000) {
    }
}
