#include "ffc/types.h"

extern void func_ov006_021b4624(void *a);
extern void func_ov006_021b45b0(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, void *h);
extern void func_ov006_021b4690(void *a);
extern uint16_t data_ov006_021b8638[];
extern uint8_t data_ov006_021b8624[];
extern void *data_ov006_021bc784;

void func_ov006_021aab88(void)
{
    volatile struct {
        uint16_t a;
        uint16_t b;
        uint16_t c;
        uint16_t d;
        uint16_t e;
        uint16_t f;
    } s;
    int i = 0;
    uint16_t z = 0;
    uint8_t *q;

    s.c = data_ov006_021b8638[0];
    s.d = data_ov006_021b8638[1];
    s.e = data_ov006_021b8638[2];
    s.e = z;
    s.e = 11;
    s.f = 16;
    func_ov006_021b4624(*(void **)*(uint8_t **)&data_ov006_021bc784);
    q = data_ov006_021b8624;
    s.b = i;
    for (; i < 12; i++) {
        uint8_t *p = *(uint8_t **)&data_ov006_021bc784;
        s.a = p[i + 8];
        uint8_t v = q[i];
        s.c = v;
        func_ov006_021b45b0(*(void **)p, v, s.d, s.e, s.f, 2, 0x480, (void *)&s);
    }
    func_ov006_021b4690(*(void **)*(uint8_t **)&data_ov006_021bc784);
}
