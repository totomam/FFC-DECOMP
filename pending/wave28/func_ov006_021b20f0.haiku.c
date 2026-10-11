#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x40];
    uint32_t f40;
} Inner;

typedef void (*CbFn)(uint32_t, void *, uint32_t);

typedef struct Outer {
    CbFn fn;
    Inner *inner;
} Outer;

extern Outer data_ov006_021bc800;
extern uint8_t data_ov006_021b9e20[];
extern uint32_t data_ov006_021b9df8[];
extern uint8_t data_ov006_021b9e28[];

void func_ov006_021b20f0(uint32_t a)
{
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x8000000, data_ov006_021b9e20,
                               data_ov006_021b9df8[data_ov006_021bc800.inner->f40]);
    }
    data_ov006_021bc800.inner->f40 = a;
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x8000000, data_ov006_021b9e28,
                               data_ov006_021b9df8[data_ov006_021bc800.inner->f40]);
    }
}
