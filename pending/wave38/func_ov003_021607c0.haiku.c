#include "ffc/types.h"

extern void *func_ov003_02146494(void *p);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern void func_ov003_02156334(int32_t *out, void *p);

int func_ov003_021607c0(uint8_t *a0, void *a1, int32_t *a2)
{
    int32_t buf[8];
    uint32_t v;
    uint32_t t;
    int32_t dx;
    int32_t dy;
    uint32_t res;
    volatile uint8_t *hw;

    v = ((uint32_t *)func_ov003_02146494(*(void **)(a0 + 0x80)))[0x52];
    t = func_02081210(0x60000, v);
    t = (uint32_t)((int32_t)t >> 12);

    func_ov003_02156334(&buf[6], a1);
    dy = buf[7] - a2[1];
    dx = buf[6] - a2[0];

    hw = (volatile uint8_t *)0x040002b0;
    *(volatile uint16_t *)hw = 0;
    *(volatile uint32_t *)(hw + 8) = (uint32_t)(dx * dx + dy * dy);
    while (*(volatile uint16_t *)hw & ((uint32_t)hw >> 11))
        ;
    res = *(volatile uint32_t *)0x040002b4;
    if (res > t) {
        return 0;
    }
    return 1;
}
