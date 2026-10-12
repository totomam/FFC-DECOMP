#include "ffc/types.h"

extern uint32_t func_ov008_0219e2d0(uint8_t *self, uint32_t idx, uint32_t val);
extern void func_02021338(uint32_t code);
extern void func_ov008_0219dce0(uint8_t *self);

void func_ov008_0219da00(uint8_t *self, uint32_t idx, uint32_t val)
{
    uint8_t *flags = self + 0xec;
    if (val == flags[idx]) {
        return;
    }
    flags[idx] = (uint8_t)val;
    if (val != 0) {
        uint32_t d = func_ov008_0219e2d0(self, idx, val);
        *(uint32_t *)(self + 0x108) += d;
        *(uint8_t *)(self + 0x10c) = *(uint8_t *)(self + 0x10c) + 1;
        func_02021338(0xbf);
    } else {
        uint32_t d = func_ov008_0219e2d0(self, idx, val);
        *(uint32_t *)(self + 0x108) -= d;
        *(uint8_t *)(self + 0x10c) = *(uint8_t *)(self + 0x10c) - 1;
        func_02021338(0xc0);
    }
    func_ov008_0219dce0(self);
}
