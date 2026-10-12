#include "ffc/types.h"

extern uint32_t func_ov008_021a2388(uint8_t *p, uint8_t idx);
extern uint32_t func_ov008_021a27ec(uint8_t *p, uint8_t idx);
extern void func_02021338(uint32_t code);
extern uint32_t func_0201e994(uint32_t x);
extern void func_ov008_021a23a8(uint8_t *p, uint8_t idx, uint32_t flag);
extern void func_ov005_02196bcc(uint32_t val, uint32_t flag);
extern void func_ov008_021a2450(uint8_t *p);
extern uint32_t data_020b93b8;

void func_ov008_021a1ea4(uint8_t *p, uint32_t v)
{
    uint8_t i;
    uint32_t off;
    uint32_t r6;
    uint8_t idx;

    i = 0;
    do {
        off = (uint32_t)(i << 2);
        if (v == *(uint32_t *)(p + off + 0xdc)) {
            idx = (uint8_t)(p[0x131] * 8 + p[0x13e]);
            if (idx < *(uint32_t *)(p + 0x108)) {
                r6 = (func_ov008_021a2388(p, idx) == 0);
                if (r6) {
                    if (func_ov008_021a27ec(p, idx) + *(uint32_t *)(p + 0x138) > *(uint32_t *)(p + 0x134)) {
                        func_02021338(0xc7);
                        return;
                    }
                }
                if (r6) {
                    if (p[0x13c] >= func_0201e994(data_020b93b8)) {
                        func_02021338(0xc7);
                        return;
                    }
                }
                func_ov008_021a23a8(p, idx, r6);
                func_ov005_02196bcc(*(uint32_t *)(p + off + 0xdc), r6);
                func_ov008_021a2450(p);
                return;
            }
        }
        i++;
    } while (i < 8);
}
