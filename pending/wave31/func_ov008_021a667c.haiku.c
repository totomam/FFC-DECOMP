#include "ffc/types.h"

extern void func_ov008_021a6958(uint8_t *p, uint32_t v);

void func_ov008_021a667c(uint8_t *p, uint32_t v) {
    uint8_t i;
    uint32_t base = (uint32_t)p[0x100] << 3;
    uint32_t *arr = *(uint32_t **)(p + 0xc4);
    for (i = 0; i < 8; i++) {
        uint8_t idx = (uint8_t)(i + base);
        if (v == arr[i]) {
            if (idx < *(uint32_t *)(p + 0xf8)) {
                uint8_t f = p[0x102];
                if (f != 0) {
                    func_ov008_021a6958(p, f);
                }
                return;
            }
        }
    }
}
