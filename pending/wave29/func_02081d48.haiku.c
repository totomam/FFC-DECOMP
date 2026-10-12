#include "ffc/types.h"

extern void func_02081e18(void);

void func_02081d48(void) {
    uint32_t a = 0x4000600;
    while (*(volatile uint32_t *)a & 0x08000000) {
    }
    *(volatile uint32_t *)a |= 0x8000;
    a = 0x4000060;
    *(volatile uint16_t *)a |= (uint16_t)(a >> 13);
    *(volatile uint16_t *)a |= (uint16_t)(a >> 14);
    func_02081e18();
    *(volatile uint32_t *)0x40004a4 = 0x001f0080;
    *(volatile uint32_t *)0x40004a8 = 0;
    *(volatile uint32_t *)0x40004ac = 0;
}
