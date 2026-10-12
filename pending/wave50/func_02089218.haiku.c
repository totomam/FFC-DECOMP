#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);

int func_02089218(uint32_t a, uint32_t b, uint32_t c) {
    volatile uint32_t t;
    uint32_t w;
    volatile uint16_t *ctl;

    w = (t & ~0x1fu) | (a & 0x1fu);
    w &= ~0x20u;
    w = (w | ((c << 31) >> 26)) & 0x3fu;
    ctl = (volatile uint16_t *)0x04000184;
    w |= b << 6;

    if (*ctl & 0x4000) {
        *ctl = *ctl | 0xC000;
        return -1;
    }
    func_02088978();
    if (*ctl & 2) {
        func_0208898c();
        return -2;
    }
    *(volatile uint32_t *)0x04000188 = w;
    func_0208898c();
    return 0;
}
