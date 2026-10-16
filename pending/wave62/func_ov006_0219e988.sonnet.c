#include "ffc/types.h"
extern void func_ov006_0219ef5c(void *d, uint32_t s, int n);
extern uint16_t func_ov006_0219f038(uint32_t a);
extern uint32_t func_ov006_0219f010(uint32_t a);
extern int8_t data_ov006_021ba1fc[];
extern uint32_t data_ov006_021ba1dc[];
int func_ov006_0219e988(uint8_t *p) {
    int16_t r6 = 0;
    int16_t n;
    int16_t k;
    uint8_t *q;
    uint32_t v;
    p[0] = data_ov006_021ba1fc[0x1d];
    p[1] = 1;
    k = data_ov006_021ba1dc[10];
    func_ov006_0219ef5c(p + 6, data_ov006_021ba1dc[9], k);
    *(uint16_t *)(p + 2) = func_ov006_0219f038((uint16_t)k);
    n = (int16_t)(((int16_t)(k + 6) + 1) / 2 * 2);
    *(uint16_t *)(p + 4) = func_ov006_0219f038((uint16_t)n);
    r6 = (int16_t)(r6 + n);
    p[n] = 0x60;
    q = p + n;
    q[1] = 0;
    *(uint16_t *)(q + 4) = func_ov006_0219f038(0);
    v = func_ov006_0219f010(0xe);
    func_ov006_0219ef5c(q + 6, (uint32_t)&v, 4);
    *(uint16_t *)(q + 2) = func_ov006_0219f038(4);
    r6 += 10;
    return (int16_t)r6;
}
