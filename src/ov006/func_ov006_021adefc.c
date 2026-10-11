#include "ffc/types.h"

extern uint32_t func_ov006_021b3bf8(uint32_t obj, uint32_t idx);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t obj, uint32_t idx, uint16_t a, uint16_t b);
extern void func_ov006_021b3d84(uint32_t obj, uint32_t idx, uint32_t c);
extern uint8_t data_ov006_021b877c[];
extern uint8_t data_ov006_021b877e[];

struct G {
    uint8_t n;
    uint8_t pad[3];
    uint8_t *base;
};

extern struct G data_ov006_021bc7ac;

void func_ov006_021adefc(void)
{
    struct G *g = &data_ov006_021bc7ac;
    int idx = g->n - 4;
    uint32_t r;
    uint32_t y;
    uint16_t a;
    uint16_t b;
    uint32_t *e;

    e = (uint32_t *)(g->base + idx * 4);
    r = func_ov006_021b3bf8(e[4], 0);
    y = 0x32;
    func_ov006_021b3e20(0, y, r);

    a = *(uint16_t *)(data_ov006_021b877c + (idx + 3) * 4);
    b = *(uint16_t *)(data_ov006_021b877e + (idx + 3) * 4);
    y = y - 0x33;

    e = (uint32_t *)(g->base + idx * 4);
    func_ov006_021b3cec(e[4], y, a, b);

    e = (uint32_t *)(g->base + idx * 4);
    func_ov006_021b3d84(e[4], y, 3);
}
