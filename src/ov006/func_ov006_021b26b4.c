#include "ffc/types.h"

extern void func_02088b3c(uint16_t *out);
extern void func_ov006_021b20f0(uint32_t x);
extern uint32_t func_ov006_021b2744(uint32_t x);
extern void func_ov006_021b2140(uint32_t x);

typedef struct {
    uint8_t pad[0x58];
    uint32_t val;
    uint16_t a;
    uint16_t b;
} Obj;

extern struct { uint32_t x; Obj *p; } data_ov006_021bc800;

uint32_t func_ov006_021b26b4(void)
{
    uint16_t v[3];
    uint32_t seed;
    uint32_t r;
    uint32_t zero = 0;
    uint32_t one = 1;

    func_02088b3c(v);
    seed = *(volatile uint32_t *)0x02fffc3c;
    data_ov006_021bc800.p->val = v[2] + (v[1] + (v[0] + seed));
    data_ov006_021bc800.p->val = data_ov006_021bc800.p->val * 0x10dcd + 0x3039;
    data_ov006_021bc800.p->a = (uint16_t)zero;
    data_ov006_021bc800.p->b = 0x65;

    func_ov006_021b20f0(3);
    r = func_ov006_021b2744(one);
    if (r == 0x18) {
        func_ov006_021b2140(0x18);
        func_ov006_021b20f0(9);
        return zero;
    }
    if (r != 2) {
        func_ov006_021b2140(r);
        func_ov006_021b20f0(9);
        return zero;
    }
    return one;
}
