#include "ffc/types.h"

extern int func_ov008_0219c624(uint8_t *p);
extern void func_ov008_0219c718(uint8_t *p, uint8_t i);
extern void func_02021338(uint32_t code);

void func_ov008_0219c5d0(uint8_t *p, uint32_t x) {
    uint8_t i;
    uint32_t *tbl = *(uint32_t **)(p + 0xc4);
    for (i = 0; i < 8; i++) {
        if (x == tbl[i]) {
            uint8_t v = (uint8_t)(i + (p[0x105] << 3));
            if (v < *(uint32_t *)(p + 0xf0)) {
                if (func_ov008_0219c624(p)) {
                    func_ov008_0219c718(p, i);
                } else {
                    func_02021338(0xc7);
                }
            }
            return;
        }
    }
}
