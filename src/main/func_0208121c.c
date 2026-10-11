#include "ffc/types.h"

extern void func_020812a4(void);

uint64_t func_0208121c(void) {
    func_020812a4();
    while (*(volatile uint16_t *)0x04000280 & 0x8000) {
    }
    return *(uint64_t *)0x040002a0;
}
