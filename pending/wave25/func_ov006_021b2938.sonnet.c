#include "ffc/types.h"
struct G { int a; uint8_t *b; };
extern struct G data_ov006_021bc800;
extern int func_ov006_021b2998(void);
int func_ov006_021b2938(void) {
    int ret = 0;
    int one = 1;
    *(uint32_t *)(data_ov006_021bc800.b + 0x12a4) = ret;
    *(uint32_t *)(data_ov006_021bc800.b + 0x12a0) = ret;
    *(uint32_t *)(data_ov006_021bc800.b + 0x48) = ret;
    *(uint16_t *)(data_ov006_021bc800.b + 0x50) = ret;
    *(uint16_t *)(data_ov006_021bc800.b + 0x52) = one;
    *(uint32_t *)(data_ov006_021bc800.b + 0x54) = ret;
    *(uint32_t *)(data_ov006_021bc800.b + 0) = ret;
    *(uint16_t *)(data_ov006_021bc800.b + 4) = ret;
    *(uint32_t *)(data_ov006_021bc800.b + 0x4c) = ret;
    if (func_ov006_021b2998() != 0) ret = one;
    return ret;
}
