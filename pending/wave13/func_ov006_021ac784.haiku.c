#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x10];
    uint32_t val;
} Inner;

typedef struct Outer {
    uint8_t f0;
    uint8_t pad[7];
    Inner *f8;
} Outer;

extern Outer data_ov006_021bc78c;
extern uint8_t data_ov006_021b866c[];
extern uint32_t func_ov006_021af520(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov006_021ac784(void) {
    uint8_t v = data_ov006_021bc78c.f0;
    uint8_t b = data_ov006_021b866c[v - 11];
    return func_ov006_021af520(data_ov006_021bc78c.f8->val, b, b);
}
