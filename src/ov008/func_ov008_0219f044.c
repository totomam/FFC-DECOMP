#include "ffc/types.h"

extern void func_ov008_0219f12c(uint8_t *self, uint32_t idx);

void func_ov008_0219f044(uint8_t *self, uint32_t val)
{
    uint8_t i = 0;
    uint32_t *tbl = *(uint32_t **)(self + 0xc4);

    do {
        if (val == tbl[i]) {
            uint32_t idx = i + (uint32_t)(self[0x100] << 3);
            if (idx < *(uint32_t *)(self + 0xf8)) {
                if (self[0x103] == 0) {
                    return;
                }
                func_ov008_0219f12c(self, idx);
                return;
            }
        }
        i++;
    } while (i < 8);
}
