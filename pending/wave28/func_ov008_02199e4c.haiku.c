#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_ov008_0219a130(uint8_t *base);

void func_ov008_02199e4c(uint8_t *base, uint32_t idx, uint32_t val) {
    uint8_t *tbl = base + 0x100;
    if (val == tbl[idx]) {
        return;
    }
    tbl[idx] = (uint8_t)val;
    if (val != 0) {
        base[0x142] = base[0x142] + 1;
        func_02021338(0xbf);
    } else {
        base[0x142] = base[0x142] - 1;
        func_02021338(0xc0);
    }
    func_ov008_0219a130(base);
}
