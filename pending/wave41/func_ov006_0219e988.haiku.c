#include "ffc/types.h"

extern int8_t data_ov006_021ba1fc[];
extern uint8_t data_ov006_021ba1dc[];
extern void func_ov006_0219ef5c(void *dst, uint32_t a, int32_t n);
extern uint16_t func_ov006_0219f038(uint16_t v);
extern uint32_t func_ov006_0219f010(uint32_t v);

int16_t func_ov006_0219e988(uint8_t *p)
{
    int32_t acc;
    int16_t idx;
    int16_t s;
    int32_t h;
    uint32_t tmp;
    uint8_t *q;

    p[0] = (uint8_t)data_ov006_021ba1fc[0x1d];
    acc = 0;
    p[1] = 1;
    s = (int16_t)*(uint32_t *)(data_ov006_021ba1dc + 0x28);
    func_ov006_0219ef5c(p + 6, *(uint32_t *)(data_ov006_021ba1dc + 0x24), s);
    *(uint16_t *)(p + 2) = func_ov006_0219f038((uint16_t)s);

    h = (int16_t)(s + 6);
    idx = (int16_t)((((h + 1) / 2)) * 2);
    *(uint16_t *)(p + 4) = func_ov006_0219f038((uint16_t)idx);

    acc = (int16_t)(acc + idx);
    p[idx] = 0x60;
    q = p + idx;
    q[1] = 0;
    *(uint16_t *)(q + 4) = func_ov006_0219f038(0);

    tmp = func_ov006_0219f010(0xe);
    func_ov006_0219ef5c(q + 6, (uint32_t)&tmp, 4);
    *(uint16_t *)(q + 2) = func_ov006_0219f038(4);

    acc = (int16_t)(acc + 10);
    return acc;
}
