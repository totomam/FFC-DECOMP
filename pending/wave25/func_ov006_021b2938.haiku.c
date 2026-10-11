#include "ffc/types.h"

struct G {
    int a;
    uint8_t *b;
};

extern struct G data_ov006_021bc800;
extern int func_ov006_021b2998(void);

int func_ov006_021b2938(void) {
    int zero = 0;
    *(uint32_t *)(data_ov006_021bc800.b + 0x12a4) = zero;
    *(uint32_t *)(data_ov006_021bc800.b + 0x12a0) = zero;
    *(uint32_t *)(data_ov006_021bc800.b + 0x48) = zero;
    int one = 1;
    *(uint16_t *)(data_ov006_021bc800.b + 0x50) = zero;
    *(uint16_t *)(data_ov006_021bc800.b + 0x52) = one;
    *(uint32_t *)(data_ov006_021bc800.b + 0x54) = zero;
    *(uint32_t *)(data_ov006_021bc800.b + 0) = zero;
    *(uint16_t *)(data_ov006_021bc800.b + 4) = zero;
    *(uint32_t *)(data_ov006_021bc800.b + 0x4c) = zero;
    if (func_ov006_021b2998() != 0) {
        return one;
    }
    return zero;
}
