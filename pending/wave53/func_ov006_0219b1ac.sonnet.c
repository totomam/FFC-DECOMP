#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint8_t *b, uint32_t c);
extern void func_020849c4(uint32_t a, uint8_t *b, uint32_t c);
extern uint16_t func_ov006_0219ae1c(uint8_t *p, uint32_t n);
extern void func_0208e9bc(uint32_t a, uint8_t *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov006_021ba0a8[];
extern uint8_t data_ov006_021ba0e0[];
extern uint8_t data_ov006_021ba0ee[];
extern uint8_t data_ov006_021ba0c8[];
extern uint8_t data_ov006_021ba0e8[];

typedef struct { uint8_t pad[0x1c]; uint8_t *p; uint32_t x; } G;
void func_ov006_0219b1ac(uint32_t a, uint32_t b, uint32_t c)
{
    #define g ((G *)data_ov006_021ba0a8)
    #define e data_ov006_021ba0e0
    uint32_t pp = (uint32_t)(g->p + 0x358);
    uint32_t xx = g->x;
    if (xx + 0x62 <= pp) {
        e[0xc] = 0x62;
    } else {
        e[0xc] = (uint8_t)(pp - xx);
        func_020849ac(0, data_ov006_021ba0ee + e[0xc], 0x62 - e[0xc]);
    }
    func_020849c4(((G *)data_ov006_021ba0a8)->x, data_ov006_021ba0ee, e[0xc]);
    e[0xa] = data_ov006_021ba0c8[7];
    e[0xb] = data_ov006_021ba0c8[8];
    { uint32_t t = e[4] & ~3; e[4] = (uint8_t)(t | (3 & *(g->p + 0x4b2))); }
    e[5] = *(g->p + 0x4b3);
    e[6] = data_ov006_021ba0c8[6];
    *(uint32_t *)e = *(uint32_t *)(g->p + 0x4b8);
    e[4] = (uint8_t)((e[4] & ~0xfc) | ((*(g->p + 0x4b5) & 0x3f) << 2));
    { uint8_t k = data_ov006_021ba0c8[9]; data_ov006_021ba0c8[9] = k + 1; e[7] = k; }
    *(uint16_t *)(e + 8) = 0;
    *(uint16_t *)(e + 8) = func_ov006_0219ae1c(data_ov006_021ba0e8, 0x68);
    data_ov006_021ba0c8[7] = data_ov006_021ba0c8[7] + 1;
    if (data_ov006_021ba0c8[7] < data_ov006_021ba0c8[8]) {
        ((G *)data_ov006_021ba0a8)->x += 0x62;
    } else {
        data_ov006_021ba0c8[4] = 4;
    }
    uint32_t f1 = c | 2;
    func_0208e9bc(0, e, 0x70, a, b, (uint8_t)(f1 | 1));
}
