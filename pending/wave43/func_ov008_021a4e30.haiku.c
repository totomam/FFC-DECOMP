#include "ffc/types.h"

extern void func_ov005_02196fc4(uint32_t a, uint32_t b);
extern uint32_t func_ov008_021a4dbc(uint8_t *p, uint8_t idx);
extern uint32_t func_ov008_021a4edc(uint8_t *p, uint8_t idx);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov008_021a4e30(uint8_t *p)
{
    uint8_t i;
    func_ov005_02196fc4(*(uint32_t *)(p + 0xf8), *(uint32_t *)(p + 0x120));
    for (i = 0; i < 8; i++) {
        uint8_t idx = (uint8_t)(i + (*(uint32_t *)(p + 0x114) << 3));
        if (idx < *(uint32_t *)(p + 0x10c)) {
            if (func_ov008_021a4dbc(p, idx) == 0 &&
                *(uint32_t *)(p + 0x120) + func_ov008_021a4edc(p, idx) > *(uint32_t *)(p + 0x11c)) {
                uint8_t *e = *(uint8_t **)(*(uint8_t **)(p + 0xd8) + i * 4);
                uint8_t *q = *(uint8_t **)(e + 0x9c);
                if (q != 0) {
                    func_0205f2f0(*(void **)(*(uint8_t **)(q + 0x50) + 0x94), 0);
                }
            } else {
                uint8_t *e = *(uint8_t **)(*(uint8_t **)(p + 0xd8) + i * 4);
                uint8_t *q = *(uint8_t **)(e + 0x9c);
                if (q != 0) {
                    func_0205f2f0(*(void **)(*(uint8_t **)(q + 0x50) + 0x94), 1);
                }
            }
        }
    }
}
