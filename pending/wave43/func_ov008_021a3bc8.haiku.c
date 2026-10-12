#include "ffc/types.h"

extern void func_ov005_02196fc4(void *a, uint32_t b);
extern uint32_t func_ov008_021a3278(void *p);
extern uint32_t func_ov008_021a3c78(void *p, uint32_t v);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov008_021a3bc8(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint16_t i;

    func_ov005_02196fc4(*(void **)(p + 0xf8), *(uint32_t *)(p + 0x120));

    for (i = 0; i < 8; i++) {
        uint32_t idx = i + (*(uint32_t *)(p + 0x114) << 3);
        if (idx >= *(uint32_t *)(p + 0x10c)) {
            continue;
        }
        if (func_ov008_021a3278(p) == 0) {
            uint32_t sum = *(uint32_t *)(p + 0x120) + func_ov008_021a3c78(p, idx);
            if (sum > *(uint32_t *)(p + 0x11c)) {
                uint8_t *e = (*(uint8_t ***)(p + 0xd8))[i];
                uint8_t *x = *(uint8_t **)(e + 0x9c);
                if (x == 0) {
                    continue;
                }
                func_0205f2f0(*(void **)(*(uint8_t **)(x + 0x50) + 0x94), 0);
                continue;
            }
        }
        {
            uint8_t *e = (*(uint8_t ***)(p + 0xd8))[i];
            uint8_t *x = *(uint8_t **)(e + 0x9c);
            if (x == 0) {
                continue;
            }
            func_0205f2f0(*(void **)(*(uint8_t **)(x + 0x50) + 0x94), 1);
        }
    }
}
