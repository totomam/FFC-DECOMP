#include "ffc/types.h"

extern int func_ov008_0219d9f8(uint8_t *p, uint8_t idx);
extern uint32_t func_ov008_0219e2d0(uint8_t *p, uint32_t v);
extern void func_02021338(uint32_t code);
extern void func_ov008_0219da00(uint8_t *p, uint8_t idx, uint32_t flag);
extern void func_ov008_0219da58(uint8_t *p);

void func_ov008_0219d90c(uint8_t *p, uint32_t x)
{
    uint8_t i;
    uint32_t *tbl = *(uint32_t **)(p + 0xc8);
    uint32_t y = x;
    for (i = 0; i < 8; i++) {
        if (y == tbl[i] && (uint32_t)(p[0x100] * 8 + i) < *(uint32_t *)(p + 0xf8)) {
            uint32_t r6 = (func_ov008_0219d9f8(p, (uint8_t)(p[0x100] * 8 + i)) == 0);
            if (r6) {
                uint32_t n = func_ov008_0219e2d0(p, p[0x100] * 8 + i);
                if (*(uint32_t *)(p + 0x108) + n > *(uint32_t *)(p + 0x104)) {
                    func_02021338(0xc7);
                    return;
                }
            }
            func_ov008_0219da00(p, (uint8_t)(p[0x100] * 8 + i), r6);
            {
                uint8_t *obj = (uint8_t *)(*(uint32_t **)(p + 0xc8))[i];
                if (r6) {
                    uint8_t *sub = *(uint8_t **)(obj + 0xa4);
                    ((void (*)(void *))(*(void ***)sub)[10])(sub);
                } else {
                    uint8_t *sub = *(uint8_t **)(obj + 0xa4);
                    ((void (*)(void *))(*(void ***)sub)[11])(sub);
                }
            }
            func_ov008_0219da58(p);
            return;
        }
    }
}
