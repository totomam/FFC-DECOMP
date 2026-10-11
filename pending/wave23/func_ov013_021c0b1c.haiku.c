#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov013_021c0b1c(uint8_t *self, uint32_t v)
{
    if (self[0xce] != 0) {
        uint32_t x = *(uint32_t *)(self + 0xc4);
        self[0xce] = 0;
        if (v == x) {
            func_02021338(0xcd);
        }
        return;
    }
    func_02021338(0xcd);
}
