#include "ffc/types.h"

extern uint32_t data_020a7d34;
extern uint32_t data_020a7d2c;

void func_ov003_02155b64(uint32_t *out, uint8_t *p) {
    uint32_t buf[4];
    uint32_t v;
    if (p[0xd2] == 1) {
        *out = data_020a7d34;
        return;
    }
    v = *(uint32_t *)((uint8_t *)*(uint8_t **)(p + 0xa8) + 0x18);
    if (v == 0xfffff000) {
        *out = data_020a7d2c;
        return;
    }
    *out = v;
    if (out == (uint32_t *)buf) {
        *out = 0;
    }
}
