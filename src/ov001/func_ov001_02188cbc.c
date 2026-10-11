#include "ffc/types.h"

extern void func_ov001_02188cdc(uint32_t x);
extern void func_0204d9ec(void (*f)(void));
extern void func_ov001_02188c94(void);
extern uint8_t data_ov001_02195798[];

void func_ov001_02188cbc(uint32_t a) {
    uint8_t *base = data_ov001_02195798;
    *(volatile uint32_t *)(base + 8) = 0;
    *(volatile uint32_t *)(base + 0x24) = a;
    func_ov001_02188cdc(*(uint32_t *)(base + 0x10));
    func_0204d9ec(func_ov001_02188c94);
}
