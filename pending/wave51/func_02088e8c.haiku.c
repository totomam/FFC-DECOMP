#include "ffc/types.h"

extern uint16_t func_02088344(volatile uint16_t *a, uint32_t b, uint32_t c, uint32_t d, uint8_t *e);
extern uint32_t data_02141860[];

uint32_t func_02088e8c(uint32_t *out, uint32_t p1, uint32_t p2, uint32_t p3)
{
    volatile uint8_t *base = (volatile uint8_t *)0x2fffc00;
    volatile uint16_t *vc = (volatile uint16_t *)0x4000006;
    volatile uint32_t *dd = (volatile uint32_t *)data_02141860;
    uint8_t *q;
    uint16_t v;
    uint16_t r;

    v = *vc;
    q = (uint8_t *)base + 0x80;
    r = func_02088344(vc, p1, p2, p3, q);
    out[0] = ((uint32_t)v << 16) | r;

    out[1] = dd[0] ^ ((uint32_t)*(volatile uint16_t *)(q + 0x78) << 16);

    {
        uint32_t w = dd[1] ^ *(volatile uint32_t *)(q + 0x74);
        w ^= *(volatile uint32_t *)(base + 0x3c);
        out[2] = w ^ *(volatile uint32_t *)0x4000600;
    }

    out[3] = *(volatile uint32_t *)(base + 0x1e8);
    out[4] = *(volatile uint32_t *)(base + 0x1ec);

    out[5] = *(volatile uint32_t *)(base + 0x390) ^ ((uint32_t)*(volatile uint16_t *)(base + 0x394) << 16);
    out[6] = ((uint32_t)*(volatile uint16_t *)(base + 0x3aa) << 16) | *(volatile uint16_t *)(base + 0x3ac);
    out[7] = (uint32_t)*(volatile uint16_t *)0x2ffffa8 | *(volatile uint16_t *)0x4000130 | ((uint32_t)*(volatile uint16_t *)(base + 0x398) << 16);
    return 0;
}
