#include "ffc/types.h"

extern void (*data_ov000_0216bca4)(uint32_t);

void func_ov000_0214b930(uint8_t *p) {
    uint8_t *s = *(uint8_t **)(p + 0xc);
    uint32_t v;
    s[0x455] = 0;
    v = *(uint32_t *)(s + 0x824);
    if (v != 0) {
        data_ov000_0216bca4(v);
    }
    *(uint32_t *)(s + 0x824) = 0;
}
