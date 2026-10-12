/* cflags: -nothumb */
#include "ffc/types.h"

extern uint8_t data_02fe0000[];
extern uint32_t func_01ff949c(uint32_t a, uint32_t b, uint32_t c);

void func_01ff93cc(void) {
    uint32_t r4;
    uint32_t r0;
    void (*fn)(void);

    *(volatile uint32_t *)0x4000208 = 0x4000000;
    *(volatile uint32_t *)(data_02fe0000 + 0x3ffc) = 0;
    while ((*(volatile uint16_t *)0x4000180 & 0xf) != 1) {
    }
    *(volatile uint16_t *)0x4000180 = 0x100;
    r0 = 0;
    r4 = *(volatile uint32_t *)0x2ffff9c;
    r0 = func_01ff949c(r0, 0x2fffd80, 0x80);
    *(volatile uint32_t *)0x2fffd9c = r4;
    r0 = func_01ff949c(r0, 0x2ffff80, 0x18);
    *(volatile uint16_t *)0x2ffff98 = (uint16_t)r0;
    r0 = func_01ff949c(r0, 0x2ffff9c, 0x64);
    while ((*(volatile uint16_t *)0x4000180 & 0xf) == 1) {
    }
    *(volatile uint16_t *)0x4000180 = 0;
    fn = *(void (**)(void))(0x2fffe00 + 0x24);
    fn();
}
