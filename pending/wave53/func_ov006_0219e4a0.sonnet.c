#include "ffc/types.h"

extern uint32_t func_ov006_0219f078(uint16_t x);
extern void func_ov006_0219ef5c(void *dst, uint8_t *src, uint32_t n);

int32_t func_ov006_0219e4a0(uint8_t *in, uint8_t *out)
{
    uint8_t *base;
    uint8_t *r4;
    uint8_t *p30;
    uint8_t *p8;
    base = in + 6;
    r4 = base;
    p8 = out;
    p8 += 8;
    p30 = out + 0x30;
    for (;;) {
        uint8_t t;
        uint32_t r5;

        r5 = func_ov006_0219f078(*(uint16_t *)(r4 + 2));
        t = r4[0];

        switch (t) {
        case 0x30:
        case 0x40:
            if (r5 > 0x40) return -1;
            break;
        case 0x35:
        case 0x45:
            if (r5 > 0x21) return -1;
            break;
        default:
            break;
        }

        switch (t) {
        case 0x30:
        case 0x40:
            func_ov006_0219ef5c(p30, r4 + 6, r5);
            *(uint32_t *)(out + 4) = r5;
            break;
        case 0x35:
        case 0x45:
            if (r5 != 0 && r4[r5 + 5] != 0) return -1;
            func_ov006_0219ef5c(p8, r4 + 6, r5);
            break;
        default:
            return -1;
        }

        if (*(uint16_t *)(r4 + 4) == 0) break;
        r4 = base + func_ov006_0219f078(*(uint16_t *)(r4 + 4));
    }
    return 0;
}
