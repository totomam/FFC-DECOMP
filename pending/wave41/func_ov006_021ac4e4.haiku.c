#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
} Ent;

extern void func_ov006_021a3cfc(uint32_t mode, uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov006_021b8718[];
extern uint8_t data_ov006_021bc78c[];
extern uint8_t data_ov006_021b86e4[];
extern uint8_t data_ov006_021b86e8[];
extern uint8_t data_ov006_021b86e6[];

void func_ov006_021ac4e4(void)
{
    Ent out;
    uint8_t buf[14];
    uint8_t *src;
    uint8_t *dst;
    uint32_t n;
    int v;

    src = data_ov006_021b8718;
    dst = buf;
    n = 14;
    do {
        *dst++ = *src++;
    } while (--n);

    v = buf[data_ov006_021bc78c[0]];
    if (v >= 3) {
        uint32_t off = v << 3;
        func_ov006_021a3cfc(3,
            *(uint16_t *)(data_ov006_021b86e4 + off),
            *(uint16_t *)(data_ov006_021b86e8 + off),
            *(uint16_t *)(data_ov006_021b86e6 + off));
        return;
    }

    out = *(Ent *)(data_ov006_021b86e4 + ((uint32_t)v << 3));
    out.b = (uint16_t)(out.b + (uint16_t)(data_ov006_021bc78c[2] * 0x1d));
    func_ov006_021a3cfc(1, out.a, out.c, out.b);
}
