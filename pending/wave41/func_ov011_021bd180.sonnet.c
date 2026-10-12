#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_020367a8(void *p);
extern uint8_t data_020ae664[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Quad;

void *func_ov011_021bd180(uint8_t *p)
{
    uint8_t local[0x58];
    uint32_t i;
    uint32_t j;
    uint16_t *d16;
    uint16_t *s16;
    uint8_t *d8;
    uint8_t *s8;

    p[0] = 0;
    p[1] = 0;
    *(uint32_t *)(p + 4) = 0;
    *(uint32_t *)(p + 8) = 0;

    func_02036750(local);

    *(uint8_t **)(p + 0xc) = data_020ae664;

    s16 = (uint16_t *)(local + 4);
    d16 = (uint16_t *)(p + 0x10);
    for (i = 0x15; i != 0; i--) {
        uint16_t v = *s16;
        s16++;
        *d16 = v;
        d16++;
    }

    *(uint32_t *)(p + 0x3c) = *(uint32_t *)(local + 0x30);

    s8 = local + 0x34;
    d8 = p + 0x40;
    for (j = 0x14; j != 0; j--) {
        uint8_t v = *s8;
        s8++;
        *d8 = v;
        d8++;
    }

    *(Quad *)(p + 0x54) = *(Quad *)(local + 0x48);

    func_020367a8(local);

    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x6c) = 0;
    *(uint32_t *)(p + 0x70) = 0;
    *(uint32_t *)(p + 0x74) = 0;
    *(uint32_t *)(p + 0x7c) = 0;

    return p;
}
