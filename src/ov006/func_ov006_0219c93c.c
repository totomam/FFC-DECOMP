#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint8_t *inner;
} Outer;

typedef struct {
    uint8_t pad0[0xe];
    uint16_t f0e;
    uint16_t f10;
    uint16_t f12;
    uint16_t f14;
    uint16_t f16;
} Inner;

extern Outer data_ov006_021ba150;

uint8_t func_ov006_0219c93c(void)
{
    Inner *p = (Inner *)data_ov006_021ba150.inner;
    uint32_t r2;
    uint32_t r3;
    uint32_t r4;
    uint32_t r1;

    r2 = (p->f12 != 0) ? 2 : 0;
    r3 = (p->f0e != 0) ? 1 : 0;
    r4 = (p->f14 != 0) ? 4 : 0;
    r1 = (p->f16 != 0) ? 8 : 0;
    return (uint8_t)(r3 | r2 | r4 | r1);
}
