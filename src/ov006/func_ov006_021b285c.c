#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad0[0x40];
    uint32_t f40;
    uint8_t pad1[0x18];
    uint16_t f5c;
    uint16_t f5e;
    uint16_t f60;
} Inner;

typedef struct Global {
    void (*fn)(uint32_t, const void *, uint16_t);
    Inner *inner;
} Global;

extern Global data_ov006_021bc800;
extern uint8_t data_ov006_021b9f44[];
extern void func_02088f30(uint32_t);
extern void func_ov006_021b20f0(uint32_t);
extern uint16_t func_ov006_021b28ac(uint16_t);

uint16_t func_ov006_021b285c(void)
{
    if (data_ov006_021bc800.inner->f40 != 7) {
        func_02088f30(data_ov006_021bc800.inner->f40);
    }
    func_ov006_021b20f0(1);
    data_ov006_021bc800.inner->f5c = func_ov006_021b28ac(data_ov006_021bc800.inner->f60);
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x08000000, data_ov006_021b9f44, data_ov006_021bc800.inner->f5c);
    }
    return data_ov006_021bc800.inner->f5c;
}
