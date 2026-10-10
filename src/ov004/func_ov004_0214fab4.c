#include "ffc/types.h"

void func_ov004_0214fab4(uint32_t *out, uint8_t *obj, uint32_t idx) {
    uint8_t *base = *(uint8_t **)(obj + 0x10C);
    uint32_t *e = (uint32_t *)(base + idx * 0x38);
    out[0] = e[0];
    out[1] = e[1];
}
