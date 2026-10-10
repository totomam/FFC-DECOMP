#include "ffc/types.h"

extern uint32_t func_ov008_0219ba0c(uint8_t *self, uint32_t idx, uint32_t val);
extern void func_02021338(uint32_t code);
extern void func_ov008_0219b374(uint8_t *self);

void func_ov008_0219b69c(uint8_t *self, uint32_t idx, uint32_t val)
{
    uint8_t *flags = self + 0xfc;
    if (val == flags[idx]) {
        return;
    }
    flags[idx] = (uint8_t)val;
    if (val != 0) {
        uint32_t d = func_ov008_0219ba0c(self, idx, val);
        *(uint32_t *)(self + 0x10c) += d;
        *(uint8_t *)(self + 0x110) = *(uint8_t *)(self + 0x110) + 1;
        func_02021338(0xbf);
    } else {
        uint32_t d = func_ov008_0219ba0c(self, idx, val);
        *(uint32_t *)(self + 0x10c) -= d;
        *(uint8_t *)(self + 0x110) = *(uint8_t *)(self + 0x110) - 1;
        func_02021338(0xc0);
    }
    func_ov008_0219b374(self);
}
