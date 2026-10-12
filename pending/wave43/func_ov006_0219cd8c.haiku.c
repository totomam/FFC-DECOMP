#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint8_t *f4;
    int32_t f8;
    int32_t fc;
} OvData;

extern OvData data_ov006_021ba1c8;
extern int32_t func_ov006_0219ce9c(uint32_t x);
extern void func_02084ca4(uint8_t *d, uint8_t *s, int32_t n);
extern uint8_t *func_ov006_0219ce38(uint8_t *dst, uint32_t c);

uint8_t *func_ov006_0219cd8c(uint8_t *src, uint8_t *dst, uint32_t c)
{
    uint8_t *r6;
    uint8_t t;
    uint8_t v;
    uint32_t w;
    OvData *d;

    t = *src;
    *dst = t;
    switch (t) {
    case 7:
        if (func_ov006_0219ce9c(c) != 0) {
            return data_ov006_021ba1c8.f4 + ((c - 1) << 5);
        }
        d = &data_ov006_021ba1c8;
        v = src[1];
        dst[2] = v;
        if (v > d->fc) {
            return 0;
        }
        func_02084ca4(src + 2, dst + 3, d->f8);
        r6 = func_ov006_0219ce38(dst, c);
        break;
    case 8:
        v = src[1];
        r6 = src + 3;
        *(uint16_t *)(dst + 2) = v;
        w = src[2];
        w = w << 8;
        *(uint16_t *)(dst + 2) = *(uint16_t *)(dst + 2) | (uint16_t)(w & 0xff00);
        break;
    case 9:
        v = src[1];
        r6 = src + 3;
        *(uint16_t *)(dst + 2) = v;
        w = src[2];
        w = w << 8;
        *(uint16_t *)(dst + 2) = *(uint16_t *)(dst + 2) | (uint16_t)(w & 0xff00);
        func_02084ca4(r6, dst + 4, data_ov006_021ba1c8.f8);
        r6 = r6 + data_ov006_021ba1c8.f8;
        break;
    default:
        return 0;
    }
    return r6;
}
