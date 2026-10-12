#include "ffc/types.h"

extern uint32_t func_02051458(uint16_t v);
extern void func_02037500(void *p, int8_t v);

void func_02051248(uint32_t *out, uint32_t *s)
{
    uint32_t i;
    uint32_t mask;
    uint8_t *p;

    for (i = 0; i < 3; i++) {
        out[i] = 0;
    }

    if (*s & 1) {
        p = (uint8_t *)s[2];
    } else {
        p = (uint8_t *)s + 2;
    }
    mask = 0xff00;

    while (p != (uint8_t *)((*s & 1) ? (s[2] + (s[1] << 1))
                                     : ((uint32_t)s + ((*(uint8_t *)s >> 1) & 0x7f) * 2 + 2))) {
        uint32_t r4 = func_02051458(*(uint16_t *)p);
        if (r4 & 0xff0000) {
            func_02037500(out, (int8_t)(r4 >> 16));
        }
        if (r4 & mask) {
            func_02037500(out, (int8_t)(r4 >> 8));
        }
        if ((int8_t)r4) {
            func_02037500(out, (int8_t)r4);
        }
        p += 2;
    }
}
