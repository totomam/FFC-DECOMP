#include "ffc/types.h"

extern uint8_t *data_0213ec90;

void func_0207ab2c(uint32_t *out) {
    uint8_t *p = data_0213ec90;
    out[0] = *(uint32_t *)(p + 0x7c);
    out[1] = *(uint32_t *)(p + 0x80);
}
