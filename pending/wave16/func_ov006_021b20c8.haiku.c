#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *p;
} Glob;

extern Glob data_ov006_021bc800;

void func_ov006_021b20c8(uint8_t *r0)
{
    data_ov006_021bc800.p = r0;
    *(uint32_t *)(r0 + 0x40) = 0;
    *(uint32_t *)(data_ov006_021bc800.p + 0x13a8) = 0;
    *(uint32_t *)(data_ov006_021bc800.p + 0x13ac) = 0;
    *(uint32_t *)(data_ov006_021bc800.p + 0x13b0) = 0;
}
