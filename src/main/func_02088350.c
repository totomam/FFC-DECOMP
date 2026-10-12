#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern void func_0208668c(int a, void (*b)(void), int c);
extern void func_020866dc(int a);
extern void func_0208859c(void);

void func_02088350(uint8_t *p) {
    uint64_t t;
    int64_t d;
    uint16_t r6;

    t = func_020882cc();
    *(volatile uint16_t *)0x4000106 = 0;
    d = *(int64_t *)(p + 0xc) - (int64_t)t;
    func_0208668c(1, func_0208859c, 0);
    r6 = 0;
    if (d < 0) {
        r6 = 0xfffe;
    } else if (d >= 0x10000) {
        r6 = 0;
    } else {
        r6 = (uint16_t)~(uint32_t)d;
    }
    *(volatile uint16_t *)0x4000104 = r6;
    *(volatile uint16_t *)0x4000106 = 0xc1;
    func_020866dc(0x10);
}
