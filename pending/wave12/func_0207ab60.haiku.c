#include "ffc/types.h"

extern uint8_t *data_0213ec90;

void func_0207ab60(int32_t idx, uint32_t val) {
    uint8_t *q = *(uint8_t **)(data_0213ec90 + 0x90);
    *(uint32_t *)(q + (idx << 4) + 0x14) = val;
}
