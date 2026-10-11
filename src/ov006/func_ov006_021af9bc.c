#include "ffc/types.h"

struct S {
    uint32_t f0;
    uint8_t pad0[0x0c];
    uint16_t h10;
    uint16_t h12;
    uint8_t pad1[0x06];
    uint8_t b1a;
};

extern void func_ov006_021b3cec(uint32_t a, int32_t b, uint32_t c, uint32_t d);
extern struct S *data_ov006_021bc7dc;

void func_ov006_021af9bc(uint32_t p) {
    struct S *s = data_ov006_021bc7dc;
    func_ov006_021b3cec(s->f0, -1, s->h10, p + s->h12);
    data_ov006_021bc7dc->b1a = p;
}
