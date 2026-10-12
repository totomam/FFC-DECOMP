#include "ffc/types.h"

void func_ov002_0219cbac(uint8_t *p, int32_t idx) {
    if (idx == -1) {
        int32_t i;
        for (i = 0; i < 3; i++) {
            uint32_t *o = *(uint32_t **)(p + 0x84 + i * 4);
            if (o != 0) {
                o[3] = 2 | (o[3] & ~0xffu);
                *(uint32_t *)(p + 0x84 + i * 4) = 0;
            }
        }
        {
            uint32_t *o = *(uint32_t **)(p + 0x90);
            if (o != 0) {
                o[3] = 2 | (o[3] & ~0xffu);
                *(uint32_t *)(p + 0x90) = 0;
            }
        }
    } else {
        uint32_t *o = *(uint32_t **)(p + 0x84 + idx * 4);
        if (o != 0) {
            o[3] = 2 | (o[3] & ~0xffu);
            *(uint32_t *)(p + 0x84 + idx * 4) = 0;
        }
    }
}
