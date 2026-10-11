#include "ffc/types.h"

void func_ov006_021b4734(int32_t sel, uint32_t val) {
    if (sel == 1) {
        volatile uint32_t *reg = (volatile uint32_t *)0x4001000;
        uint32_t t = (*reg & (0x1fu << 8)) >> 8;
        uint32_t n = t & ~val;
        *reg = (*reg & 0xffffe0ffu) | (n << 8);
        return;
    }
    {
        volatile uint32_t *reg = (volatile uint32_t *)(1u << 26);
        uint32_t t = (*reg & (0x1fu << 8)) >> 8;
        uint32_t n = t & ~val;
        *reg = (*reg & 0xffffe0ffu) | (n << 8);
    }
}
