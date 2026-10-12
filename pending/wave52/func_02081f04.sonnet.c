#include "ffc/types.h"
extern void func_021d9b10(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_021d9aa4(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_02084610(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02084498(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020849e0(uint32_t a, void *b, uint32_t c);
extern uint32_t data_020b2948;

void func_02081f04(void)
{
    uint32_t v = data_020b2948;
    if (v != 0xFFFFFFFF) {
        uint8_t *p = (uint8_t *)0x4000330;
        if (v > 3) {
            func_021d9b10(v - 4, p, 0, 0x10, 0, 0);
            p += 0x30;
            func_021d9aa4(data_020b2948 - 4, p, 0, 0x60);
        } else {
            func_02084610(v, p, 0, 0x10, 0, 0, 1);
            p += 0x30;
            func_02084498(data_020b2948, p, 0, 0x60, 1);
        }
    } else {
        uint8_t *p = (uint8_t *)0x4000330;
        func_020849e0(0, p, 0x10);
        p += 0x30;
        func_020849e0(0, p, 0x60);
    }
    for (uint32_t i = 0; i < 0x20; i++) {
        *(volatile uint32_t *)0x40004d0 = i;
    }
}
